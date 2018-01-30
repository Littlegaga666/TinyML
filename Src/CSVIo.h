/// @file CSVIo.h
/// @brief  CSV文件操作头文件
/// 
/// Detail:
/// @author Jie_Liu  
/// @version   
/// @date 2018/01/30

#ifndef _CSVIo_H_
#define _CSVIo_H_

#include "LMatrix.h"


typedef LMatrix<double> LDataMatrix;     ///< 数据矩阵

class CCSVParser;

/// @brief CSV文件解析器
/// 本解析器之支持解析数值数据, 并且不能有缺失数据
class LCSVParser
{
public:
    /// @brief 构造函数
    explicit LCSVParser(IN const wchar_t* fileName);

    /// @brief 析构函数
    ~LCSVParser();

    /// @brief 设置是否跳过首行
    /// 默认不跳过首行
    /// @param[in] skip true(跳过), false(不跳过)
    void SetSkipHeader(IN bool skip);

    /// @brief 加载所有数据
    /// @param[in] dataMatrix 存储数据
    bool LoadAllData(OUT LDataMatrix& dataMatrix);

private:
    CCSVParser* m_pParser; ///< CSV文件解析器实现对象
};

#endif
