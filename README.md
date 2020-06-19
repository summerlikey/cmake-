# 项目框架

## 文件目录

```
.
├── build
├── CMakeLists.txt
├── COPYRIGHT
├── data
│   ├── images_src_01
│   │   ├── left_images
│   │   │   ├── left_src_01.JPG
│   │   │   ├── left_src_02.JPG
│   │   │   └── left_src_03.JPG
│   │   └── righte_images
│   │       ├── right_src_01.JPG
│   │       ├── right_src_02.JPG
│   │       └── right_src_03.JPG
│   └── images_src_02
│       ├── left_images
│       └── righte_images
├── docs
│   └── README.md
├── include
├── lib
│   └── libmyfun.so
├── README.md
├── src
│   ├── CMakeLists.txt
│   ├── func1.cpp
│   ├── func1.h
│   ├── func2.cpp
│   ├── func2.h
│   ├── getimages.cpp
│   ├── getimages.h
│   └── main.cpp
└── test
    ├── CMakeLists.txt
    └── test1.cpp

```

## 链接

链接第三方库，其他文件也需要链接例如opencv

## 安装

安装部分还没有加入，

TODO设置头文件和库文件的放置，include和lib文件夹