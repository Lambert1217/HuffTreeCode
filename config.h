#ifndef CONFIG_H
#define CONFIG_H

#define NUMBER 127

#include <QString>

//字符 结构体
struct mychar{
    char c;   //字符
    int w = 0;  //频度
    QString code;  //编码
};

#endif // CONFIG_H
