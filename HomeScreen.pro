# Copyright (C) 2016, 2017 Mentor Graphics Development (Deutschland) GmbH
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

TEMPLATE = subdirs

load(configure)
qtCompileTest(ivi_layermanagement_api)

SUBDIRS = interfaces \
    libhomescreen \
    HomeScreen \
    HomeScreenAppFrameworkBinderAGL \
    HomeScreenSimulator \
    InputEventManager \
    SampleAppTimeDate \
    WindowManager \
    SampleHomeScreenInterfaceApp

HomeScreen.depends = interfaces
HomeScreenSimulator.depends = interfaces
HomeScreenAppFrameworkBinderAGL.depends = interfaces
InputEventManager.depends = interfaces
SampleAppTimeDate.depends = interfaces
WindowManager.depends = interfaces
libhomescreen.depends = interfaces
SampleHomeScreenInterfaceApp.depends = libhomescreen
