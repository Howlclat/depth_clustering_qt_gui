#-------------------------------------------------
#
# Project created by QtCreator 2019-03-15T15:25:41
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = depth_clustering_qt_gui
TEMPLATE = app


SOURCES +=\
    communication/identifiable.cpp \
    ground_removal/depth_ground_remover.cpp \
    image_labelers/diff_helpers/angle_diff.cpp \
    image_labelers/diff_helpers/line_dist_diff.cpp \
    image_labelers/abstract_image_labeler.cpp \
    projections/cloud_projection.cpp \
    projections/projection_params.cpp \
    projections/ring_projection.cpp \
    projections/spherical_projection.cpp \
    qt/drawables/drawable_cloud.cpp \
    qt/drawables/drawable_cube.cpp \
    qt/utils/utils.cpp \
    qt/viewer/viewer.cpp \
    qt/widgets/base_viewer_widget.cpp \
    qt/widgets/opengl_folder_player.cpp \
    qt/widgets/tabbed_widget.cpp \
    qt/main.cpp \
    utils/bbox.cpp \
    utils/cloud.cpp \
    utils/folder_reader.cpp \
    utils/rich_point.cpp \
    utils/velodyne_utils.cpp \
    visualization/cloud_saver.cpp \
    visualization/visualizer.cpp

HEADERS  += \
    clusterers/abstract_clusterer.h \
    clusterers/euclidean_clusterer.h \
    clusterers/image_based_clusterer.h \
    communication/abstract_client.h \
    communication/abstract_sender.h \
    communication/identifiable.h \
    ground_removal/depth_ground_remover.h \
    image_labelers/diff_helpers/abstract_diff.h \
    image_labelers/diff_helpers/angle_diff.h \
    image_labelers/diff_helpers/diff_factory.h \
    image_labelers/diff_helpers/line_dist_diff.h \
    image_labelers/diff_helpers/simple_diff.h \
    image_labelers/abstract_image_labeler.h \
    image_labelers/dijkstra_image_labeler.h \
    image_labelers/hash_queue.h \
    image_labelers/linear_image_labeler.h \
    image_labelers/pixel_coords.h \
    projections/cloud_projection.h \
    projections/projection_params.h \
    projections/ring_projection.h \
    projections/spherical_projection.h \
    qt/drawables/bbox_painter.h \
    qt/drawables/drawable.h \
    qt/drawables/drawable_cloud.h \
    qt/drawables/drawable_cube.h \
    qt/drawables/object_painter.h \
    qt/utils/utils.h \
    qt/viewer/viewer.h \
    qt/widgets/base_viewer_widget.h \
    qt/widgets/opengl_folder_player.h \
    qt/widgets/tabbed_widget.h \
    tclap/Arg.h \
    tclap/ArgException.h \
    tclap/ArgTraits.h \
    tclap/CmdLine.h \
    tclap/CmdLineInterface.h \
    tclap/CmdLineOutput.h \
    tclap/Constraint.h \
    tclap/DocBookOutput.h \
    tclap/HelpVisitor.h \
    tclap/IgnoreRestVisitor.h \
    tclap/MultiArg.h \
    tclap/MultiSwitchArg.h \
    tclap/OptionalUnlabeledTracker.h \
    tclap/StandardTraits.h \
    tclap/StdOutput.h \
    tclap/SwitchArg.h \
    tclap/UnlabeledMultiArg.h \
    tclap/UnlabeledValueArg.h \
    tclap/ValueArg.h \
    tclap/ValuesConstraint.h \
    tclap/VersionVisitor.h \
    tclap/Visitor.h \
    tclap/XorHandler.h \
    tclap/ZshCompletionOutput.h \
    utils/bbox.h \
    utils/cloud.h \
    utils/folder_reader.h \
    utils/mem_utils.h \
    utils/pose.h \
    utils/radians.h \
    utils/rich_point.h \
    utils/timer.h \
    utils/useful_typedefs.h \
    utils/velodyne_utils.h \
    visualization/cloud_saver.h \
    visualization/visualizer.h

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

FORMS += \
    qt/widgets/ui/opengl_folder_player.ui

QMAKE_CXXFLAGS += -std=c++0x

QT += xml opengl

