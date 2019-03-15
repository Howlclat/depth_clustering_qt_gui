# depth_clustering_qt_gui

本项目来源：https://github.com/PRBonn/depth_clustering

> This is a fast and robust algorithm to segment point clouds taken with Velodyne sensor into objects. It works with all available Velodyne sensors, i.e. 16, 32 and 64 beam ones.

由于本人不熟悉原项目使用的catkin编译系统及cmake工具，特将原项目中使用qt编写的gui示例程序重新以Qt Creator的 .pro 工程的形式呈现。

## 环境及依赖

本人所使用的环境及依赖库版本如下：

- Ubuntu 16.04 x64
- Qt 5.5.1
- PCL-1.7 ( eigen3, vtk, boost... )
- OpenCV 2.4.9
- QGLViewer

（依赖库全部以apt方法安装，故版本较旧）

请根据自身环境中具体路径，重点修改pro文件中以下部分：

```
INCLUDEPATH += \
    /usr/include/pcl-1.7/ \
    /usr/include/eigen3/ \
    /usr/include/vtk-6.2/ \
    /usr/include/boost \
    /usr/include/opencv \
    /usr/include/opencv2 \
    /usr/include/QGLViewer

LIBS += \
    /usr/lib/x86_64-linux-gnu/libpcl_*.so \
    /usr/lib/x86_64-linux-gnu/libvtk*.so \
    /usr/lib/x86_64-linux-gnu/libboost*.so \
    /usr/lib/x86_64-linux-gnu/libopencv_core.so \
    /usr/lib/x86_64-linux-gnu/libopencv_highgui.so \
    /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so \
    #/usr/lib/x86_64-linux-gnu/libopencv_imgcodecs.so \
    /usr/lib/x86_64-linux-gnu/libQGLViewer.so
```

其中，`libopencv_imgcodecs.so` 在使用 OpenCV 3 时应被添加。 

若使用Qt4，应将代码中`#include <QtWidget/xxx> ` 修改为`#include <QtGui/xxx>` ，其他有关Qt版本的问题请按照官方文档修改。