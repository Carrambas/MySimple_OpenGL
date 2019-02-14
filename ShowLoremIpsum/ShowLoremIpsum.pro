TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    main.cpp


HEADERS += \
    glfw_bin/include/GLFW/glfw3.h \
    glfw_bin/include/GLFW/glfw3native.h \
    glew_bin/include/eglew.h \
    glew_bin/include/glew.h \
    glew_bin/include/glxew.h \
    glew_bin/include/wglew.h \
    Shader.h \
    Letters.h \
    Camera.h





QT += opengl
LIBS += -lopengl32

DISTFILES += \
    shader.frag \
    shader.vert \


//glfw
win32: LIBS += -L$$PWD/glfw_bin/lib-mingw/ -lglfw3

INCLUDEPATH += $$PWD/glfw_bin/lib-mingw
DEPENDPATH += $$PWD/glfw_bin/lib-mingw

win32:!win32-g++: PRE_TARGETDEPS += $$PWD/glfw_bin/lib-mingw/glfw3.lib
else:win32-g++: PRE_TARGETDEPS += $$PWD/glfw_bin/lib-mingw/libglfw3.a


win32: LIBS += -L$$PWD/glfw_bin/lib-mingw/ -lglfw3dll

INCLUDEPATH += $$PWD/glfw_bin/lib-mingw
DEPENDPATH += $$PWD/glfw_bin/lib-mingw

win32:!win32-g++: PRE_TARGETDEPS += $$PWD/glfw_bin/lib-mingw/glfw3dll.lib
else:win32-g++: PRE_TARGETDEPS += $$PWD/glfw_bin/lib-mingw/libglfw3dll.a



INCLUDEPATH += $$PWD/../../glfw_bin/include/GLFW/
INCLUDEPATH += $$PWD/../../glew_bin/include/GL/


//gdi
win32: LIBS += -L$$PWD/gdi/ -lgdi32

INCLUDEPATH += $$PWD/gdi
DEPENDPATH += $$PWD/gdi

win32:!win32-g++: PRE_TARGETDEPS += $$PWD/gdi/gdi32.lib
else:win32-g++: PRE_TARGETDEPS += $$PWD/gdi/libgdi32.a



//glew

win32: LIBS += -L$$PWD/glew_bin/lib/ -lglew32

INCLUDEPATH += $$PWD/glew_bin/include
DEPENDPATH += $$PWD/glew_bin/include

win32:!win32-g++: PRE_TARGETDEPS += $$PWD/glew_bin/lib/glew32.lib
else:win32-g++: PRE_TARGETDEPS += $$PWD/glew_bin/lib/libglew32.a


//
win32: LIBS += -L$$PWD/glew_bin/lib/ -lglew32mx

INCLUDEPATH += $$PWD/glew_bin/include
DEPENDPATH += $$PWD/glew_bin/include

win32:!win32-g++: PRE_TARGETDEPS += $$PWD/glew_bin/lib/glew32mx.lib
else:win32-g++: PRE_TARGETDEPS += $$PWD/glew_bin/lib/libglew32mx.a







//soil
win32: LIBS += -L$$PWD/soil/ -lSOIL

INCLUDEPATH += $$PWD/soil
DEPENDPATH += $$PWD/soil

win32:!win32-g++: PRE_TARGETDEPS += $$PWD/soil/SOIL.lib
else:win32-g++: PRE_TARGETDEPS += $$PWD/soil/libSOIL.a
