#ifndef SHORTREST_H
#define SHORTREST_H

#include <QWidget>
#include "ui_ShortRest.h"

class ShortRest : public QWidget
{
	Q_OBJECT

public:
	ShortRest(QWidget *parent = 0);
	~ShortRest();

private:
	Ui::ShortRest ui;
};

#endif // SHORTREST_H
