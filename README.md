This project contains:

HomeScreen: AGL Home Screen reference implementation
HomeScreenAppFrameworkBinderAGL: Binder for the AGL application framework
HomeScreenSimulator: AGL Home Screen Simulator for development
InputEventManager: AGL Input event manager
interfaces: the D-Bus interface introspections
libhomescreen: HomeScreen API C++ shared library
SampleAppTimeDate: AGL Sample Application for Home Screen Statusbar
SampleHomeScreenInterfaceApp: sample application to show how to use libhomescreen
WindowManager: AGL WindowManager reference implementation

AGL repo for source code:
https://gerrit.automotivelinux.org/gerrit/gitweb?p=staging%2FHomeScreen.git

AGL repo for bitbake recipe:
https://gerrit.automotivelinux.org/gerrit/gitweb?p=AGL/meta-agl-demo.git;a=blob;f=recipes-demo-hmi/homescreen/homescreen_git.bb




Quickstart:

Instructions for building HomeScreen app
----------------------------------------

The HomeScreen app is part of the 
packagegroup-agl-demo-platform
packagegroup.

This also includes the following apps:
- HomeScreenAppFrameworkBinderAGL
- InputEventManager
- SampleAppTimeDate
- SampleHomeScreenInterfaceApp
- WindowManager

And the library
- libhomescreen


To build all the above, follow the instrucions on the AGL
documentation website:
http://docs.automotivelinux.org/docs/getting_started/en/dev/reference/source-code.html#features-supported-by-aglsetup

Please activate the "agl-demo" feature when running the aglsetup script:
http://docs.automotivelinux.org/docs/getting_started/en/dev/reference/source-code.html#features-supported-by-aglsetup
