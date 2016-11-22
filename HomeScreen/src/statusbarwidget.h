/*
 * Copyright (C) 2016 Mentor Graphics Development (Deutschland) GmbH
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef STATUSBARWIDGET_H
#define STATUSBARWIDGET_H

#include <QWidget>
#include "statusbar_adaptor.h"

namespace Ui {
class StatusBarWidget;
}

class StatusBarWidget : public QWidget
{
    Q_OBJECT

public:
    explicit StatusBarWidget(QWidget *parent = 0);
    ~StatusBarWidget();
public slots:
    void updateColorScheme();

// from statusbar_adaptor.h
public Q_SLOTS: // METHODS
    QList<int> getAvailablePlaceholders();
    QString getStatusIcon(int placeholderIndex);
    QString getStatusText(int placeholderIndex);
    void setStatusIcon(int placeholderIndex, const QString &iconURI);
    void setStatusText(int placeholderIndex, const QString &text);

private:
    Ui::StatusBarWidget *mp_ui;

    StatusbarAdaptor *mp_statusbarAdaptor;

    QMap<int, QString> *mp_statusbarIconURIs;
};

#endif // STATUSBARWIDGET_H
