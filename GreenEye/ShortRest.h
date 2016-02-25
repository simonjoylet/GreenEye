#ifndef SHORTREST_H
#define SHORTREST_H

#include <QWidget>
#include "ui_ShortRest.h"
#include <QCloseEvent>

class ShortRest : public QWidget
{
	Q_OBJECT

public:
	ShortRest(QWidget *parent = 0);
	~ShortRest();
	virtual void closeEvent(QCloseEvent * e);

private:
	Ui::ShortRest ui;
};

#endif // SHORTREST_H
