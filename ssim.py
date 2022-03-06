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
    subfix = os.path.splitext(filename2)[1]
    savedir = 'reps'
    savepath = os.path.join(basedir, savedir)
    if os.path.exists(savepath) is not True:
        os.mkdir(savepath)

    f2md5 = get_file_md5(filename2)
    savepath = os.path.join(basedir, savedir, f'{name}_{f2md5}{subfix}')
    move(filename2, savepath)


def do_work_directory(dir_path, moverepic=True):
    EXT = ['.jpg', '.jpeg', '.png']
    imgs_n = []
    img_files = [os.path.join(rootdir, file) for rootdir, _, files in os.walk(dir_path) for file in files if
                 (os.path.splitext(file)[-1] in EXT)]
    for currIndex, filename in enumerate(img_files):
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


def test():
    # p1 = "pics/5.jpeg"
    # p2 = "pics/5_1.jpeg"
    # compare_pics(p1, p2)

    do_work_directory("pics")


if __name__ == '__main__':
    if len(sys.argv) != 2:
        print(f"usage:\n\t{sys.argv[0]} <pic_dir>")
    else:
        do_work_directory(sys.argv[1])
    pass