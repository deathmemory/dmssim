import sys

from picsimcheck import *
from filemd5 import *
import os
from shutil import move


def compare_pics(imgpath1, imgpath2):
    img1 = cv2.imread(imgpath1)
    img2 = cv2.imread(imgpath2)
    res = classify_hist_with_split(img1, img2)
    resstr = f'{imgpath1} <==> {imgpath2} ssim: {res}'
    if (res > 0.8):
        print(f'\033[0;34;40m\t{resstr}\033[0m')
    else:
        print(resstr)
    return res


def move_repeat_pics(filename, filename2):
    sp = os.path.split(filename)
    basedir = sp[0]
    name = os.path.splitext(sp[1])[0]
    f2name = os.path.split(filename2)[1]
    savedir = 'reps'
    savepath = os.path.join(basedir, savedir)
    if os.path.exists(savepath) is not True:
        os.mkdir(savepath)

    f2md5 = get_file_md5(filename2)
    savepath = os.path.join(basedir, savedir, f'{name}_{f2md5}_{f2name}')
    move(filename2, savepath)


def get_pic_files(dir):
    EXT = ['.jpg', '.jpeg', '.png']
    img_files = [os.path.join(rootdir, file) for rootdir, _, files in os.walk(dir) for file in files if
                 (os.path.splitext(file)[-1] in EXT)]
    return img_files


def do_work_directory(dir_path, moverepic=True):
    img_files = get_pic_files(dir_path)
    return do_work_(img_files, img_files)


def test():
    # p1 = "pics/5.jpeg"
    # p2 = "pics/5_1.jpeg"
    # compare_pics(p1, p2)

    do_work_directory("pics")


def do_add_new_to_old_directory(newdir, olddir):
    newfiles = get_pic_files(newdir)
    oldfiles = get_pic_files(olddir)
    img_files = newfiles + oldfiles
    return do_work_(newfiles, img_files)


def do_work_(dir1, img_files, moverepic=True):
    imgs_n = []
    for currIndex, filename in enumerate(dir1):
        if filename in imgs_n:
            continue
        if currIndex >= len(img_files) - 1:
            break
        for filename2 in img_files[currIndex + 1:]:
            if filename2 in imgs_n:
                continue
            try:
                ssim = compare_pics(filename, filename2)
                if ssim > 0.8:
                    imgs_n.append(filename2)
                    print(filename, filename2, ssim)
                    if (moverepic):
                        move_repeat_pics(filename, filename2)
            except:
                continue
    print(imgs_n)
    return imgs_n

if __name__ == '__main__':
    if len(sys.argv) == 2:
        do_work_directory(sys.argv[1])
    elif len(sys.argv) == 3:
        do_add_new_to_old_directory(sys.argv[1], sys.argv[2])
    else:
        print(f"usage:")
        print("\t1. 识别指定文件夹中的相似图片")
        print(f"\t\t{sys.argv[0]} <pic_dir>")
        print("\t2. 识别新增图片文件夹中与已去重文件夹的相似图片")
        print(f"\t\t{sys.argv[0]} <new_pic_dir> <old_pic_dir>")
        pass
    pass