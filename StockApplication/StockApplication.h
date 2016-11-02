#pragma once

#include <QtWidgets/QMainWindow>
#include "StockWindowUI.h"

#include <vector>

class StockApplication : public QMainWindow
{
	Q_OBJECT

public:
	StockApplication(QWidget *parent = Q_NULLPTR);

private:
	StockWindowUI ui;
};
