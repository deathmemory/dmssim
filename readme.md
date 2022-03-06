图片相似度识别，去重。

主入口 `ssim.py`

# 安装依赖环境

1. 本程序在 [python3](https://www.python.org/downloads/) 环境下测试通过。
2. 安装依赖库

```bash
pip install -r requirements.txt
```

# 使用

```
usage:
	1. 识别指定文件夹中的相似图片
		python3 ssim.py <pic_dir>
	2. 识别新增图片文件夹中与已去重文件夹的相似图片
		python3 ssim.py <new_pic_dir> <old_pic_dir>
```

相似的图片会移动到 `<pic_dir>/reps` 目录下


参考：

https://blog.csdn.net/enter89/article/details/90293971
https://blog.csdn.net/vivian_ll/article/details/89915490
