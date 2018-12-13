# How To Use Doxygen

## 環境需求

- cmake
- doxygen
- Windows或是Linux都可以，只要你有裝doxygen和cmake

## cmake 的 configure_file指令

configure_file指令最主要的作用就是把目標檔案的特定內容，做修改/替換，然後輸出成另一個檔案  
在這個專案中，已事前使用 `doxygen -g Doxyfile.in` 產生了設定檔  
然後針對該檔，只保留想要的內容，並且帶入想要被替換的部分  
想要被替換的內容包含 `@CMAKE_CURRENT_SOURCE_DIR@` 和 `@CMAKE_CURRENT_BINARY_DIR@`  
專案建置完後，你可以比較看看 `Doxyfile.in` 和 `build/Doxyfile` 這兩檔案的差別

## Doxygen的設定檔

Doxygen的設定檔所使用的設定檔，預設名稱為Doxyfile  
在此專案中，cmake會透過configure_file指令，讀取設定檔模板 `Doxyfile.in`  
取代掉 INPUT 與 OUTPUT_DIRECTORY 的值之後，輸出為 `Doxyfile`  
之後呼叫 `Doxygen` 產生說明文件
此專案中最基礎的設定值有兩個，分別為 INPUT 和 OUTPUT_DIRECTORY ，對應輸入和輸出

## 專案建置流程

    mkdir build
    cd build
    cmake ..
    cmake --build . # 等同於執行make，或是Visual Studio的建置按鈕
    # 執行完會產生 doc_doxygen 資料夾，輸出的說明文件都會在裡面
    # 找到 ./html/index.html ，用瀏覽器打開它就是了
