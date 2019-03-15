/********************************************************************************
** Form generated from reading UI file 'opengl_folder_player.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENGL_FOLDER_PLAYER_H
#define UI_OPENGL_FOLDER_PLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qt/viewer/viewer.h>

QT_BEGIN_NAMESPACE

class Ui_OpenGlFolderPlayer
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hor_lay_controls;
    QPushButton *btn_open_folder;
    QComboBox *cmb_extension;
    QPushButton *btn_play;
    QSlider *sldr_navigate_clouds;
    QSpinBox *spnbx_current_cloud;
    QVBoxLayout *ver_layout_vis;
    QHBoxLayout *horizontalLayout;
    QLabel *lbl_cloud_name_explain;
    QLabel *lbl_cloud_name;
    Viewer *gl_widget;
    QGraphicsView *gfx_labels;
    QGraphicsView *gfx_projection_view;
    QVBoxLayout *ver_lay_segment;
    QFrame *line_3;
    QLabel *label_4;
    QFrame *line_8;
    QRadioButton *radio_show_angles;
    QRadioButton *radio_show_segmentation;
    QFrame *line_9;
    QLabel *label_5;
    QComboBox *cmb_diff_type;
    QFrame *line_10;
    QLabel *label_6;
    QDoubleSpinBox *spnbx_line_dist_threshold;
    QFrame *line_11;
    QLabel *lbl_separation_angle;
    QDoubleSpinBox *spnbx_separation_angle;
    QFrame *line;
    QLabel *lbl_ground_angle;
    QDoubleSpinBox *spnbx_ground_angle;
    QFrame *line_2;
    QLabel *label;
    QSpinBox *spnbx_min_cluster_size;
    QFrame *line_4;
    QLabel *label_2;
    QSpinBox *spnbx_max_cluster_size;
    QFrame *line_5;
    QLabel *label_3;
    QSpinBox *spnbx_smooth_window_size;
    QFrame *line_6;
    QSpacerItem *verticalSpacer;
    QFrame *line_7;

    void setupUi(QWidget *OpenGlFolderPlayer)
    {
        if (OpenGlFolderPlayer->objectName().isEmpty())
            OpenGlFolderPlayer->setObjectName(QStringLiteral("OpenGlFolderPlayer"));
        OpenGlFolderPlayer->resize(1174, 964);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OpenGlFolderPlayer->sizePolicy().hasHeightForWidth());
        OpenGlFolderPlayer->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(OpenGlFolderPlayer);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(9, 9, 9, -1);
        hor_lay_controls = new QHBoxLayout();
        hor_lay_controls->setObjectName(QStringLiteral("hor_lay_controls"));
        btn_open_folder = new QPushButton(OpenGlFolderPlayer);
        btn_open_folder->setObjectName(QStringLiteral("btn_open_folder"));

        hor_lay_controls->addWidget(btn_open_folder);

        cmb_extension = new QComboBox(OpenGlFolderPlayer);
        cmb_extension->setObjectName(QStringLiteral("cmb_extension"));

        hor_lay_controls->addWidget(cmb_extension);

        btn_play = new QPushButton(OpenGlFolderPlayer);
        btn_play->setObjectName(QStringLiteral("btn_play"));

        hor_lay_controls->addWidget(btn_play);

        sldr_navigate_clouds = new QSlider(OpenGlFolderPlayer);
        sldr_navigate_clouds->setObjectName(QStringLiteral("sldr_navigate_clouds"));
        sldr_navigate_clouds->setOrientation(Qt::Horizontal);

        hor_lay_controls->addWidget(sldr_navigate_clouds);

        spnbx_current_cloud = new QSpinBox(OpenGlFolderPlayer);
        spnbx_current_cloud->setObjectName(QStringLiteral("spnbx_current_cloud"));

        hor_lay_controls->addWidget(spnbx_current_cloud);


        gridLayout->addLayout(hor_lay_controls, 0, 0, 1, 1);

        ver_layout_vis = new QVBoxLayout();
        ver_layout_vis->setObjectName(QStringLiteral("ver_layout_vis"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        lbl_cloud_name_explain = new QLabel(OpenGlFolderPlayer);
        lbl_cloud_name_explain->setObjectName(QStringLiteral("lbl_cloud_name_explain"));

        horizontalLayout->addWidget(lbl_cloud_name_explain);

        lbl_cloud_name = new QLabel(OpenGlFolderPlayer);
        lbl_cloud_name->setObjectName(QStringLiteral("lbl_cloud_name"));
        lbl_cloud_name->setTextFormat(Qt::PlainText);
        lbl_cloud_name->setScaledContents(true);

        horizontalLayout->addWidget(lbl_cloud_name);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 4);

        ver_layout_vis->addLayout(horizontalLayout);

        gl_widget = new Viewer(OpenGlFolderPlayer);
        gl_widget->setObjectName(QStringLiteral("gl_widget"));
        sizePolicy.setHeightForWidth(gl_widget->sizePolicy().hasHeightForWidth());
        gl_widget->setSizePolicy(sizePolicy);
        gl_widget->setMinimumSize(QSize(640, 480));
        gl_widget->setAutoFillBackground(false);

        ver_layout_vis->addWidget(gl_widget);

        gfx_labels = new QGraphicsView(OpenGlFolderPlayer);
        gfx_labels->setObjectName(QStringLiteral("gfx_labels"));
        sizePolicy.setHeightForWidth(gfx_labels->sizePolicy().hasHeightForWidth());
        gfx_labels->setSizePolicy(sizePolicy);
        gfx_labels->setMinimumSize(QSize(900, 80));
        gfx_labels->setMaximumSize(QSize(16777215, 16777215));
        gfx_labels->setRenderHints(QPainter::Antialiasing|QPainter::TextAntialiasing);
        gfx_labels->setViewportUpdateMode(QGraphicsView::SmartViewportUpdate);

        ver_layout_vis->addWidget(gfx_labels);

        gfx_projection_view = new QGraphicsView(OpenGlFolderPlayer);
        gfx_projection_view->setObjectName(QStringLiteral("gfx_projection_view"));
        sizePolicy.setHeightForWidth(gfx_projection_view->sizePolicy().hasHeightForWidth());
        gfx_projection_view->setSizePolicy(sizePolicy);
        gfx_projection_view->setMinimumSize(QSize(900, 80));
        gfx_projection_view->setMaximumSize(QSize(16777215, 16777215));

        ver_layout_vis->addWidget(gfx_projection_view);

        ver_layout_vis->setStretch(0, 1);
        ver_layout_vis->setStretch(1, 30);
        ver_layout_vis->setStretch(2, 4);
        ver_layout_vis->setStretch(3, 4);

        gridLayout->addLayout(ver_layout_vis, 1, 0, 1, 1);

        ver_lay_segment = new QVBoxLayout();
        ver_lay_segment->setObjectName(QStringLiteral("ver_lay_segment"));
        line_3 = new QFrame(OpenGlFolderPlayer);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        ver_lay_segment->addWidget(line_3);

        label_4 = new QLabel(OpenGlFolderPlayer);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        label_4->setTextFormat(Qt::AutoText);

        ver_lay_segment->addWidget(label_4);

        line_8 = new QFrame(OpenGlFolderPlayer);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        ver_lay_segment->addWidget(line_8);

        radio_show_angles = new QRadioButton(OpenGlFolderPlayer);
        radio_show_angles->setObjectName(QStringLiteral("radio_show_angles"));
        radio_show_angles->setChecked(true);

        ver_lay_segment->addWidget(radio_show_angles);

        radio_show_segmentation = new QRadioButton(OpenGlFolderPlayer);
        radio_show_segmentation->setObjectName(QStringLiteral("radio_show_segmentation"));

        ver_lay_segment->addWidget(radio_show_segmentation);

        line_9 = new QFrame(OpenGlFolderPlayer);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);

        ver_lay_segment->addWidget(line_9);

        label_5 = new QLabel(OpenGlFolderPlayer);
        label_5->setObjectName(QStringLiteral("label_5"));

        ver_lay_segment->addWidget(label_5);

        cmb_diff_type = new QComboBox(OpenGlFolderPlayer);
        cmb_diff_type->setObjectName(QStringLiteral("cmb_diff_type"));

        ver_lay_segment->addWidget(cmb_diff_type);

        line_10 = new QFrame(OpenGlFolderPlayer);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);

        ver_lay_segment->addWidget(line_10);

        label_6 = new QLabel(OpenGlFolderPlayer);
        label_6->setObjectName(QStringLiteral("label_6"));

        ver_lay_segment->addWidget(label_6);

        spnbx_line_dist_threshold = new QDoubleSpinBox(OpenGlFolderPlayer);
        spnbx_line_dist_threshold->setObjectName(QStringLiteral("spnbx_line_dist_threshold"));
        spnbx_line_dist_threshold->setReadOnly(true);
        spnbx_line_dist_threshold->setMaximum(99);
        spnbx_line_dist_threshold->setSingleStep(0.1);
        spnbx_line_dist_threshold->setValue(0.2);

        ver_lay_segment->addWidget(spnbx_line_dist_threshold);

        line_11 = new QFrame(OpenGlFolderPlayer);
        line_11->setObjectName(QStringLiteral("line_11"));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);

        ver_lay_segment->addWidget(line_11);

        lbl_separation_angle = new QLabel(OpenGlFolderPlayer);
        lbl_separation_angle->setObjectName(QStringLiteral("lbl_separation_angle"));

        ver_lay_segment->addWidget(lbl_separation_angle);

        spnbx_separation_angle = new QDoubleSpinBox(OpenGlFolderPlayer);
        spnbx_separation_angle->setObjectName(QStringLiteral("spnbx_separation_angle"));
        spnbx_separation_angle->setMinimum(1);
        spnbx_separation_angle->setMaximum(180);
        spnbx_separation_angle->setValue(10);

        ver_lay_segment->addWidget(spnbx_separation_angle);

        line = new QFrame(OpenGlFolderPlayer);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        ver_lay_segment->addWidget(line);

        lbl_ground_angle = new QLabel(OpenGlFolderPlayer);
        lbl_ground_angle->setObjectName(QStringLiteral("lbl_ground_angle"));

        ver_lay_segment->addWidget(lbl_ground_angle);

        spnbx_ground_angle = new QDoubleSpinBox(OpenGlFolderPlayer);
        spnbx_ground_angle->setObjectName(QStringLiteral("spnbx_ground_angle"));
        spnbx_ground_angle->setMinimum(1);
        spnbx_ground_angle->setMaximum(90);
        spnbx_ground_angle->setValue(9);

        ver_lay_segment->addWidget(spnbx_ground_angle);

        line_2 = new QFrame(OpenGlFolderPlayer);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        ver_lay_segment->addWidget(line_2);

        label = new QLabel(OpenGlFolderPlayer);
        label->setObjectName(QStringLiteral("label"));

        ver_lay_segment->addWidget(label);

        spnbx_min_cluster_size = new QSpinBox(OpenGlFolderPlayer);
        spnbx_min_cluster_size->setObjectName(QStringLiteral("spnbx_min_cluster_size"));
        spnbx_min_cluster_size->setMaximum(100000);
        spnbx_min_cluster_size->setValue(10);

        ver_lay_segment->addWidget(spnbx_min_cluster_size);

        line_4 = new QFrame(OpenGlFolderPlayer);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        ver_lay_segment->addWidget(line_4);

        label_2 = new QLabel(OpenGlFolderPlayer);
        label_2->setObjectName(QStringLiteral("label_2"));

        ver_lay_segment->addWidget(label_2);

        spnbx_max_cluster_size = new QSpinBox(OpenGlFolderPlayer);
        spnbx_max_cluster_size->setObjectName(QStringLiteral("spnbx_max_cluster_size"));
        spnbx_max_cluster_size->setMaximum(1000000);
        spnbx_max_cluster_size->setValue(10000);

        ver_lay_segment->addWidget(spnbx_max_cluster_size);

        line_5 = new QFrame(OpenGlFolderPlayer);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        ver_lay_segment->addWidget(line_5);

        label_3 = new QLabel(OpenGlFolderPlayer);
        label_3->setObjectName(QStringLiteral("label_3"));

        ver_lay_segment->addWidget(label_3);

        spnbx_smooth_window_size = new QSpinBox(OpenGlFolderPlayer);
        spnbx_smooth_window_size->setObjectName(QStringLiteral("spnbx_smooth_window_size"));
        spnbx_smooth_window_size->setMinimum(5);
        spnbx_smooth_window_size->setMaximum(11);
        spnbx_smooth_window_size->setSingleStep(2);
        spnbx_smooth_window_size->setValue(5);

        ver_lay_segment->addWidget(spnbx_smooth_window_size);

        line_6 = new QFrame(OpenGlFolderPlayer);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        ver_lay_segment->addWidget(line_6);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        ver_lay_segment->addItem(verticalSpacer);


        gridLayout->addLayout(ver_lay_segment, 0, 2, 2, 1);

        line_7 = new QFrame(OpenGlFolderPlayer);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_7, 0, 1, 2, 1);


        retranslateUi(OpenGlFolderPlayer);
        QObject::connect(sldr_navigate_clouds, SIGNAL(valueChanged(int)), spnbx_current_cloud, SLOT(setValue(int)));
        QObject::connect(spnbx_current_cloud, SIGNAL(valueChanged(int)), sldr_navigate_clouds, SLOT(setValue(int)));

        cmb_extension->setCurrentIndex(2);
        cmb_diff_type->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(OpenGlFolderPlayer);
    } // setupUi

    void retranslateUi(QWidget *OpenGlFolderPlayer)
    {
        OpenGlFolderPlayer->setWindowTitle(QApplication::translate("OpenGlFolderPlayer", "Form", 0));
        btn_open_folder->setText(QApplication::translate("OpenGlFolderPlayer", "Open Folder", 0));
        cmb_extension->clear();
        cmb_extension->insertItems(0, QStringList()
         << QApplication::translate("OpenGlFolderPlayer", ".txt", 0)
         << QApplication::translate("OpenGlFolderPlayer", ".pcd", 0)
         << QApplication::translate("OpenGlFolderPlayer", ".png", 0)
         << QApplication::translate("OpenGlFolderPlayer", ".bin", 0)
         << QApplication::translate("OpenGlFolderPlayer", ".exr", 0)
        );
        btn_play->setText(QApplication::translate("OpenGlFolderPlayer", "Play", 0));
        lbl_cloud_name_explain->setText(QApplication::translate("OpenGlFolderPlayer", "Cloud name:", 0));
        lbl_cloud_name->setText(QApplication::translate("OpenGlFolderPlayer", "<cloud_name>", 0));
        label_4->setText(QApplication::translate("OpenGlFolderPlayer", "<html><head/><body><p align=\"center\">Segmentation Params</p></body></html>", 0));
        radio_show_angles->setText(QApplication::translate("OpenGlFolderPlayer", "Show angles", 0));
        radio_show_segmentation->setText(QApplication::translate("OpenGlFolderPlayer", "Show segmentation", 0));
        label_5->setText(QApplication::translate("OpenGlFolderPlayer", "<html><head/><body><p align=\"center\">Difference type</p></body></html>", 0));
        cmb_diff_type->clear();
        cmb_diff_type->insertItems(0, QStringList()
         << QApplication::translate("OpenGlFolderPlayer", "Angle", 0)
         << QApplication::translate("OpenGlFolderPlayer", "AnglePrecomputed", 0)
         << QApplication::translate("OpenGlFolderPlayer", "LineDistance", 0)
         << QApplication::translate("OpenGlFolderPlayer", "LineDistancePrecomputed", 0)
         << QApplication::translate("OpenGlFolderPlayer", "Simple", 0)
        );
        label_6->setText(QApplication::translate("OpenGlFolderPlayer", "<html><head/><body><p align=\"center\">Separation line dist [m]</p><p align=\"center\"><span style=\" font-size:8pt; color:#656565;\">used if DiffType is LineDistance</span></p></body></html>", 0));
        lbl_separation_angle->setText(QApplication::translate("OpenGlFolderPlayer", "<html><head/><body><p align=\"center\">Separation angle [deg]</p><p align=\"center\"><span style=\" font-size:8pt; color:#656565;\">used if DiffType is Angle</span></p></body></html>", 0));
        lbl_ground_angle->setText(QApplication::translate("OpenGlFolderPlayer", "<html><head/><body><p align=\"center\">Ground remove angle [deg]</p></body></html>", 0));
        label->setText(QApplication::translate("OpenGlFolderPlayer", "<html><head/><body><p align=\"center\">Min cluster size</p></body></html>", 0));
        label_2->setText(QApplication::translate("OpenGlFolderPlayer", "<html><head/><body><p align=\"center\">Max cluster size</p></body></html>", 0));
        label_3->setText(QApplication::translate("OpenGlFolderPlayer", "<html><head/><body><p align=\"center\">Smoothing window size</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class OpenGlFolderPlayer: public Ui_OpenGlFolderPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENGL_FOLDER_PLAYER_H
