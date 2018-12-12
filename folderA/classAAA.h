#include <vector>
/**
 * @brief 簡短的敘述只能有一行，
 * 就算你寫在第二行，也會被合併
 * 
 * 完整的敘述第一行  
 * 在最後加兩個空格，會有換行的效果(詳細參考標準Markdown語法)  
 * 完整的敘述跟簡短的敘述中間要空一行  
 * @example example.cpp
 */
class AAA
{
public:
    /**
     * @brief 巢狀子類別subAAAClass的簡短介紹
     * 
     * 測試看使用巢狀子類別Doxygen會發生啥事
     */
    class subAAAClass
    {
    public:
        /**
         * @brief 建構子subAAAClass的簡短說明
         * 
         * @param 參數vecaa的說明
         */
        subAAAClass(std::vector<int> vecaa);
    };

    /**
     * @brief 巢狀子結構subAAAStruct的簡短介紹
     * 
     * 測試看加入巢狀子結構Doxygen會發生啥事
     */
    struct subAAAStruct
    {
        /// 成員變數a，這樣會是詳細介紹
        int a;
        /// 成員變數b的介紹
        int b;
    };

public:
    /**
     * @brief 預設建構子
     * 
     */
    AAA();
    /**
     * @brief 帶參數建構子
     * 
     * @param valueA 說明參數valueA做啥用的
     * @param valueB 參數valueB是幹啥的
     */
    AAA(int valueA, int valueB);

    /**
     * @brief 成員涵式func1的簡短介紹
     * 
     * @param a 這是參數a
     */
    void func1(float a);

    /**
     * @brief 成員涵式func2的簡短介紹
     * 
     * @param b 參數b的介紹  
     *          參數b的第二行介紹  
     *          記得多行的話，最後要有兩個空格
     * @return 回傳參數的說明  
     *         回傳參數的第二行說明
     */
    float func2(float b);
};
