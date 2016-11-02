#pragma once
#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

class StockWindowUI
{
public:

	void setupUi(QMainWindow *MainWindow); // setupUi

	void retranslateUi(QMainWindow *MainWindow); // retranslateUi

private:
	//Widget Containers//
	QWidget *centralwidget;
	QWidget *layoutWidget;

	//Menu//
	QStatusBar *statusbar;
	QMenuBar *menubar;
	QMenu *menuFile;
	QAction *actionExit;
	QMenu *menuEdit;
	QAction *actionPaste;
	QMenu *menuSettings;
	QAction *actionPreferences;
	QMenu *menuHelp;
	QAction *actionAbout;

	//Layouts//
	QHBoxLayout *graphLayout;
	///Graph
	QGraphicsView *stockGraph;
	//Graph Options
	QVBoxLayout *verticalLayout;
	QGroupBox *graphOptionsGroup;
	QRadioButton *oneDay;
	QRadioButton *fiveDay;
	QRadioButton *oneMonth;
	QRadioButton *sixMonth;
	QRadioButton *yearToDate;
	QRadioButton *oneYear;
	QRadioButton *tenYear;
	QRadioButton *maxGraph;
	QCheckBox *graphPrediction;
	QLabel *PredictionRangeLabel;
	QSlider *shownPredictionRange;

	//Prediction Settings 
	QHBoxLayout *predictionTypeLayout;
	QPushButton *startPrediction;
	QGroupBox *predictionType;
	QRadioButton *timePrediction;
	QRadioButton *instantPrediction;
	
	//Prediction Delay
	QSlider *predictionDelay;
	QLabel *DelayLabel;
	QLabel *delay;
	QLabel *predictionTimeRemaining;

	//Stock Information
	QWidget *stockWidget;
	QVBoxLayout *stockLayout;
	QHBoxLayout *stockInput;
	QLineEdit *selectedStockSymbol;
	QPushButton *selectButton;
	QHBoxLayout *StockDetails;
	QLabel *stockPrice;
	QLabel *stockIncrease;
	QLabel *percentIncrease;
};

#endif // UI_MAINWINDOW_H