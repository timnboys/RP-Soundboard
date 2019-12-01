// src/about_qt.h
//----------------------------------
// RP Soundboard Source Code
// Copyright (c) 2015 Marius Graefe
// All rights reserved
// Contact: rp_soundboard@mgraefe.de
//----------------------------------

#pragma once
#ifndef rpsbsrc__about_qt_H__
#define rpsbsrc__about_qt_H__

#include <QtWidgets/QWidget>

#include "ui_about_qt.h"

namespace Ui {
	class AboutQt;
}


class AboutQt : public QWidget
{
	Q_OBJECT

public:
	explicit AboutQt(QWidget *parent = 0);
	~AboutQt();

private:
	Ui::AboutQt *ui;
};


#endif