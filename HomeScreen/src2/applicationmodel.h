/*
 * Copyright (C) 2016 The Qt Company Ltd.
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

#ifndef APPLICATIONMODEL_H
#define APPLICATIONMODEL_H

#include <QtCore/QAbstractListModel>

class ApplicationModel : public QAbstractListModel
{
    Q_OBJECT
public:
    explicit ApplicationModel(QObject *parent = nullptr);
    ~ApplicationModel();

    int rowCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
    QHash<int, QByteArray> roleNames() const override;
    void changeLanguage(const QString &lang);
    void changeOrder(const int &hash);
private:
    class Private;
    Private *d;
};

#endif // APPLICATIONMODEL_H