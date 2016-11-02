#include "StockWindowUI.h"

void StockWindowUI::setupUi(QMainWindow *MainWindow){
	if (MainWindow->objectName().isEmpty())
		MainWindow->setObjectName(QStringLiteral("MainWindow"));
	MainWindow->resize(695, 472);
	actionExit = new QAction(MainWindow);
	actionExit->setObjectName(QStringLiteral("actionExit"));
	actionPreferences = new QAction(MainWindow);
	actionPreferences->setObjectName(QStringLiteral("actionPreferences"));
	actionPaste = new QAction(MainWindow);
	actionPaste->setObjectName(QStringLiteral("actionPaste"));
	actionAbout = new QAction(MainWindow);
	actionAbout->setObjectName(QStringLiteral("actionAbout"));
	centralwidget = new QWidget(MainWindow);
	centralwidget->setObjectName(QStringLiteral("centralwidget"));
	layoutWidget = new QWidget(centralwidget);
	layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
	layoutWidget->setGeometry(QRect(11, 141, 671, 283));
	graphLayout = new QHBoxLayout(layoutWidget);
	graphLayout->setObjectName(QStringLiteral("graphLayout"));
	graphLayout->setContentsMargins(0, 0, 0, 0);
	stockGraph = new QGraphicsView(layoutWidget);
	stockGraph->setObjectName(QStringLiteral("stockGraph"));

	graphLayout->addWidget(stockGraph);

	graphOptionsGroup = new QGroupBox(layoutWidget);
	graphOptionsGroup->setObjectName(QStringLiteral("graphOptionsGroup"));
	graphOptionsGroup->setMaximumSize(QSize(136, 16777215));
	verticalLayout = new QVBoxLayout(graphOptionsGroup);
	verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
	oneDay = new QRadioButton(graphOptionsGroup);
	oneDay->setObjectName(QStringLiteral("oneDay"));

	verticalLayout->addWidget(oneDay);

	fiveDay = new QRadioButton(graphOptionsGroup);
	fiveDay->setObjectName(QStringLiteral("fiveDay"));

	verticalLayout->addWidget(fiveDay);

	oneMonth = new QRadioButton(graphOptionsGroup);
	oneMonth->setObjectName(QStringLiteral("oneMonth"));

	verticalLayout->addWidget(oneMonth);

	sixMonth = new QRadioButton(graphOptionsGroup);
	sixMonth->setObjectName(QStringLiteral("sixMonth"));

	verticalLayout->addWidget(sixMonth);

	yearToDate = new QRadioButton(graphOptionsGroup);
	yearToDate->setObjectName(QStringLiteral("yearToDate"));

	verticalLayout->addWidget(yearToDate);

	oneYear = new QRadioButton(graphOptionsGroup);
	oneYear->setObjectName(QStringLiteral("oneYear"));

	verticalLayout->addWidget(oneYear);

	tenYear = new QRadioButton(graphOptionsGroup);
	tenYear->setObjectName(QStringLiteral("tenYear"));

	verticalLayout->addWidget(tenYear);

	maxGraph = new QRadioButton(graphOptionsGroup);
	maxGraph->setObjectName(QStringLiteral("maxGraph"));

	verticalLayout->addWidget(maxGraph);

	graphPrediction = new QCheckBox(graphOptionsGroup);
	graphPrediction->setObjectName(QStringLiteral("graphPrediction"));

	verticalLayout->addWidget(graphPrediction);

	PredictionRangeLabel = new QLabel(graphOptionsGroup);
	PredictionRangeLabel->setObjectName(QStringLiteral("PredictionRangeLabel"));

	verticalLayout->addWidget(PredictionRangeLabel);

	shownPredictionRange = new QSlider(graphOptionsGroup);
	shownPredictionRange->setObjectName(QStringLiteral("shownPredictionRange"));
	shownPredictionRange->setOrientation(Qt::Horizontal);

	verticalLayout->addWidget(shownPredictionRange);


	graphLayout->addWidget(graphOptionsGroup);

	startPrediction = new QPushButton(centralwidget);
	startPrediction->setObjectName(QStringLiteral("startPrediction"));
	startPrediction->setGeometry(QRect(490, 30, 101, 41));
	predictionType = new QGroupBox(centralwidget);
	predictionType->setObjectName(QStringLiteral("predictionType"));
	predictionType->setGeometry(QRect(250, 10, 156, 50));
	predictionTypeLayout = new QHBoxLayout(predictionType);
	predictionTypeLayout->setObjectName(QStringLiteral("predictionTypeLayout"));
	timePrediction = new QRadioButton(predictionType);
	timePrediction->setObjectName(QStringLiteral("timePrediction"));

	predictionTypeLayout->addWidget(timePrediction);

	instantPrediction = new QRadioButton(predictionType);
	instantPrediction->setObjectName(QStringLiteral("instantPrediction"));

	predictionTypeLayout->addWidget(instantPrediction);

	predictionDelay = new QSlider(centralwidget);
	predictionDelay->setObjectName(QStringLiteral("predictionDelay"));
	predictionDelay->setGeometry(QRect(260, 90, 160, 22));
	predictionDelay->setOrientation(Qt::Horizontal);
	DelayLabel = new QLabel(centralwidget);
	DelayLabel->setObjectName(QStringLiteral("DelayLabel"));
	DelayLabel->setGeometry(QRect(260, 70, 47, 13));
	delay = new QLabel(centralwidget);
	delay->setObjectName(QStringLiteral("delay"));
	delay->setGeometry(QRect(310, 110, 31, 16));
	predictionTimeRemaining = new QLabel(centralwidget);
	predictionTimeRemaining->setObjectName(QStringLiteral("predictionTimeRemaining"));
	predictionTimeRemaining->setGeometry(QRect(470, 90, 141, 21));
	stockWidget = new QWidget(centralwidget);
	stockWidget->setObjectName(QStringLiteral("widget"));
	stockWidget->setGeometry(QRect(10, 10, 211, 121));
	stockLayout = new QVBoxLayout(stockWidget);
	stockLayout->setObjectName(QStringLiteral("stockLayout"));
	stockLayout->setContentsMargins(0, 0, 0, 0);
	stockInput = new QHBoxLayout();
	stockInput->setObjectName(QStringLiteral("stockInput"));
	selectedStockSymbol = new QLineEdit(stockWidget);
	selectedStockSymbol->setObjectName(QStringLiteral("selectedStockSymbol"));

	stockInput->addWidget(selectedStockSymbol);

	selectButton = new QPushButton(stockWidget);
	selectButton->setObjectName(QStringLiteral("selectButton"));

	stockInput->addWidget(selectButton);


	stockLayout->addLayout(stockInput);

	StockDetails = new QHBoxLayout();
	StockDetails->setObjectName(QStringLiteral("StockDetails"));
	stockPrice = new QLabel(stockWidget);
	stockPrice->setObjectName(QStringLiteral("stockPrice"));

	StockDetails->addWidget(stockPrice);

	stockIncrease = new QLabel(stockWidget);
	stockIncrease->setObjectName(QStringLiteral("stockIncrease"));

	StockDetails->addWidget(stockIncrease);

	percentIncrease = new QLabel(stockWidget);
	percentIncrease->setObjectName(QStringLiteral("percentIncrease"));

	StockDetails->addWidget(percentIncrease);


	stockLayout->addLayout(StockDetails);

	MainWindow->setCentralWidget(centralwidget);
	layoutWidget->raise();
	layoutWidget->raise();
	stockPrice->raise();
	stockIncrease->raise();
	percentIncrease->raise();
	startPrediction->raise();
	predictionType->raise();
	predictionDelay->raise();
	DelayLabel->raise();
	delay->raise();
	predictionTimeRemaining->raise();
	statusbar = new QStatusBar(MainWindow);
	statusbar->setObjectName(QStringLiteral("statusbar"));
	MainWindow->setStatusBar(statusbar);
	menubar = new QMenuBar(MainWindow);
	menubar->setObjectName(QStringLiteral("menubar"));
	menubar->setGeometry(QRect(0, 0, 695, 21));
	menuFile = new QMenu(menubar);
	menuFile->setObjectName(QStringLiteral("menuFile"));
	menuEdit = new QMenu(menubar);
	menuEdit->setObjectName(QStringLiteral("menuEdit"));
	menuHelp = new QMenu(menubar);
	menuHelp->setObjectName(QStringLiteral("menuHelp"));
	menuSettings = new QMenu(menubar);
	menuSettings->setObjectName(QStringLiteral("menuSettings"));
	MainWindow->setMenuBar(menubar);

	menubar->addAction(menuFile->menuAction());
	menubar->addAction(menuEdit->menuAction());
	menubar->addAction(menuSettings->menuAction());
	menubar->addAction(menuHelp->menuAction());
	menuFile->addSeparator();
	menuFile->addAction(actionExit);
	menuEdit->addAction(actionPaste);
	menuHelp->addAction(actionAbout);
	menuSettings->addAction(actionPreferences);

	retranslateUi(MainWindow);

	QMetaObject::connectSlotsByName(MainWindow);
}

void StockWindowUI::retranslateUi(QMainWindow *MainWindow){
	MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
	actionExit->setText(QApplication::translate("MainWindow", "Exit...", 0));
	actionPreferences->setText(QApplication::translate("MainWindow", "Preferences...", 0));
	actionPaste->setText(QApplication::translate("MainWindow", "Paste                   Ctrl+V", 0));
	actionAbout->setText(QApplication::translate("MainWindow", "About...", 0));
#ifndef QT_NO_WHATSTHIS
	stockGraph->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>Display's a graph of the stock's data, including color coded increases and decreases.</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
	graphOptionsGroup->setTitle(QApplication::translate("MainWindow", "Graph Options", 0));
	oneDay->setText(QApplication::translate("MainWindow", "1 Day", 0));
	fiveDay->setText(QApplication::translate("MainWindow", "5 Day", 0));
	oneMonth->setText(QApplication::translate("MainWindow", "1 Month", 0));
	sixMonth->setText(QApplication::translate("MainWindow", "6 Month", 0));
	yearToDate->setText(QApplication::translate("MainWindow", "Year to Date", 0));
	oneYear->setText(QApplication::translate("MainWindow", "1 Year", 0));
	tenYear->setText(QApplication::translate("MainWindow", "10 Year", 0));
	maxGraph->setText(QApplication::translate("MainWindow", "Max", 0));
#ifndef QT_NO_TOOLTIP
	graphPrediction->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Show the predicted range on the graph as a dashed line extending outward</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
	graphPrediction->setText(QApplication::translate("MainWindow", "Show Prediction", 0));
	PredictionRangeLabel->setText(QApplication::translate("MainWindow", "Shown Prediction Range", 0));
	startPrediction->setText(QApplication::translate("MainWindow", "Start Prediction", 0));
	predictionType->setTitle(QApplication::translate("MainWindow", "Prediction Type", 0));
	timePrediction->setText(QApplication::translate("MainWindow", "Over Time", 0));
	instantPrediction->setText(QApplication::translate("MainWindow", "Instant", 0));
	DelayLabel->setText(QApplication::translate("MainWindow", "Delay", 0));
	delay->setText(QApplication::translate("MainWindow", "2 Days", 0));
	predictionTimeRemaining->setText(QApplication::translate("MainWindow", "Time Remaining: 00:00:00", 0));
	selectedStockSymbol->setText(QApplication::translate("MainWindow", "Desired Stock Symbol", 0));
	selectButton->setText(QApplication::translate("MainWindow", "Select", 0));
	stockPrice->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt;\">113.12 </span></p></body></html>", 0));
	stockIncrease->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; color:#00e200;\">+0.10</span></p></body></html>", 0));
	percentIncrease->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; color:#00d400;\">(+0.09%)</span></p></body></html>", 0));
	menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
	menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0));
	menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
	menuSettings->setTitle(QApplication::translate("MainWindow", "Settings", 0));
}
