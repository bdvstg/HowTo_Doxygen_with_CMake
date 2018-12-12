cmake_minimum_required(VERSION 3.0)

# 尋找系統中有沒有Doxygen
find_package(Doxygen)
# 有成功的話
# DOXYGEN_FOUND會是TRUE
# DOXYGEN_EXECUTABLE該執行檔的絕對路徑

if (DOXYGEN_FOUND)
    # 讀取Doxyfile.in，取代變數後，輸出Doxyfile
    configure_file(
        ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in # 設定檔的樣板(template)
        ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile # 最終doxygen指令會使用的設定檔
        @ONLY
    )

    message("============== 設定自定義專案來產生說明文件 ==============")
    add_custom_target( doc_doxygen ALL
        COMMAND ${DOXYGEN_EXECUTABLE}
        COMMENT "---------------- 開始呼叫Doxygen產生說明文件 --------------"
        VERBATIM
    )
else (DOXYGEN_FOUND)
    message("系統沒有安裝Doxygen或是路徑有問題無法執行Doxygen")
endif (DOXYGEN_FOUND)
