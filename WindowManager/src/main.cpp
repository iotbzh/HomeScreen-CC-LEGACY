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

#include <QCoreApplication>
#include "windowmanager.hpp"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // used for application settings (QSettings)
    QCoreApplication::setOrganizationDomain("LinuxFoundation");
    QCoreApplication::setOrganizationName("AutomotiveGradeLinux");
    QCoreApplication::setApplicationName("WindowManager");
    QCoreApplication::setApplicationVersion("0.3.0");

    qDBusRegisterMetaType<SimplePoint>();
    qDBusRegisterMetaType<QList<SimplePoint> >();
    qDBusRegisterMetaType<SimpleRect>();
    qDBusRegisterMetaType<QList<SimpleRect> >();

    WindowManager *windowManager = new WindowManager();
    windowManager->start();

#ifdef __arm__
    qDebug("Running on ARM architecture");
#endif
#ifdef __i386__
    qDebug("Running on x86 architecture");
#endif

    return a.exec();
}