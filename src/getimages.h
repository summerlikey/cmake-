#ifndef GETIMAGES_H
#define GETIMAGES_H

#include<iostream>
#include<vector>
#include"opencv2/opencv.hpp"
class GetImages
{
public:
    GetImages();
    //读取图片
    void read_images();
    void set_pattern_jpg(std::string path);
    void set_images_files();
private:
    //path
    std::string pattern_jpg;
    //all images path
    std::vector<cv::String> images_files;
    //src image
    std::vector<cv::Mat> src_images;
    //flit images
    std::vector<cv::Mat> flit_images;//TODO
};

#endif // GETIMAGES_H
