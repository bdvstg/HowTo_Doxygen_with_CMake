/**
 * 要在某個地方有使用到這個檔案，這個檔案才會出現在說明文件內
 * 目前是在 class AAA 的說明內有加 @example example.cpp
 */
#include <folderA/classAAA.h>

/**
 * Doxygen形式的說明，不會被顯示在說明文件內
 */
int main(void)
{
    /**
     * 像這個也會消失
     */
    AAA varAAA; // 預設建構子
    AAA varAAAwithParam(1,1); // 帶參數建構子
    AAA::subAAAClass varSubAAAClass({1,2,3,4,5}); // 子類別，帶參數建構子
    AAA::subAAAStruct varSubAAAStruct; // 子結構，帶參數建構子
    varSubAAAStruct.a = 1;
    varSubAAAStruct.b = 1;
    return 0;
}
