#include "getimages.h"

GetImages::GetImages()
{

}

void GetImages::read_images()
{
    for(unsigned long i=0;i<images_files.size();i++)
    {

        cv::Mat image=cv::imread(images_files[i]);
        if(image.empty()){
            std::cout<<"no images"<<std::endl;
            break;
        }
        src_images.push_back(image);
    }
}

void GetImages::set_pattern_jpg(std::string path)
{
    pattern_jpg = path;
}

void GetImages::set_images_files()
{
    cv::glob(pattern_jpg, images_files);
}
