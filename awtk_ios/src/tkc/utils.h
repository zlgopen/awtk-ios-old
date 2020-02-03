﻿/**
 * File:   utils.h
 * Author: AWTK Develop Team
 * Brief:  utils struct and utils functions.
 *
 * Copyright (c) 2018 - 2020  Guangzhou ZHIYUAN Electronics Co.,Ltd.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * License file for more details.
 *
 */

/**
 * History:
 * ================================================================
 * 2018-02-21 Li XianJing <xianjimli@hotmail.com> created
 *
 */

#ifndef TK_UTILS_H
#define TK_UTILS_H

#include "tkc/str.h"
#include "tkc/types_def.h"

BEGIN_C_DECLS

/**
 * @class utils_t
 * @annotation ["fake"]
 * 工具类。
 *
 */

/**
 * @method tk_atoi
 *
 * 将字符串转换为整形。
 *
 * @param {const char*} str 要转换为整形的字符串。
 *
 * @return {int} 返回转换后的整形。
 */
int tk_atoi(const char* str);

/**
 * @method tk_atob
 *
 * 将字符串转换为布尔类型。
 *
 * @param {const char*} str 要转换为布尔类型的字符串。
 *
 * @return {bool_t} 返回转换后的布尔类型。
 */
bool_t tk_atob(const char* str);

/**
 * @method tk_atof
 *
 * 将字符串转换为浮点类型。
 *
 * @param {const char*} str 要转换为浮点类型的字符串。
 *
 * @return {double} 返回转换后的浮点类型。
 */
double tk_atof(const char* str);

/**
 * @method tk_str_cmp
 *
 * 字符串比较函数。
 *
 * @param {const char*} a 要进行比较的第一个字符串。
 * @param {const char*} b 要进行比较的第二个字符串。
 *
 * @return {int32_t} 如果返回值=-1，则表示a为NULL；如果返回值=1，则表示b为NULL；如果返回值<0，则表示a小于b；如果返回值>0，则表示a大于b；如果返回值=0，则表示a等于b。
 */
int32_t tk_str_cmp(const char* a, const char* b);

/**
 * @method tk_str_icmp
 *
 * 字符串比较函数（不区分大小写）。
 *
 * @param {const char*} a 要进行比较的第一个字符串。
 * @param {const char*} b 要进行比较的第二个字符串。
 *
 * @return {int32_t} 如果返回值=-1，则表示a为NULL；如果返回值=1，则表示b为NULL；如果返回值<0，则表示a小于b；如果返回值>0，则表示a大于b；如果返回值=0，则表示a等于b。
 */
int32_t tk_str_icmp(const char* a, const char* b);

/**
 * @method tk_watoi
 *
 * 将宽字符串转换为整形。
 *
 * @param {const wchar_t*} str 要转换为整形的宽字符串。
 *
 * @return {int} 返回转换后的整形。
 */
int tk_watoi(const wchar_t* str);

/**
 * @method tk_watob
 *
 * 将宽字符串转换为布尔类型。
 *
 * @param {const wchar_t*} str 要转换为布尔类型的宽字符串。
 *
 * @return {bool_t} 返回转换后的布尔类型。
 */
bool_t tk_watob(const wchar_t* str);

/**
 * @method tk_watof
 *
 * 将宽字符串转换为浮点类型。
 *
 * @param {const wchar_t*} str 要转换为浮点类型的宽字符串。
 *
 * @return {double} 返回转换后的浮点类型。
 */
double tk_watof(const wchar_t* str);

/**
 * @method tk_skip_to_num
 *
 * 跳过字符串函数，如：字符串"hello123world"，返回的结果是"123world"。
 *
 * @param {const char*} str 要输入的原始字符串。
 *
 * @return {const char*} 返回转换后的字符串。
 */
const char* tk_skip_to_num(const char* str);

/**
 * @method tk_itoa
 *
 * 将整形转换为字符串。
 *
 * @param {char*} str 保存字符串缓冲区。
 * @param {int} len 缓冲区大小。
 * @param {int} n 要转换的整形。
 *
 * @return {const char*} 返回字符串。
 */
const char* tk_itoa(char* str, int len, int n);

/**
 * @method tk_ftoa
 *
 * 将浮点型转换为字符串。
 *
 * @param {char*} str 保存字符串缓冲区。
 * @param {int} len 缓冲区大小。
 * @param {double} f 要转换的浮点型。
 *
 * @return {const char*} 返回字符串。
 */
const char* tk_ftoa(char* str, int len, double f);

/**
 * @method tk_strtol
 *
 * 将字符串转换为长整形。
 *
 * @param {const char*} str 要转换为长整形的字符串。
 * @param {const char**} end 对类型char*的对象的引用。
 * @param {int} base 基数。
 *
 * @return {long} 返回转换后的长整形。
 */
long tk_strtol(const char* str, const char** end, int base);

/**
 * @method tk_strcpy
 *
 * 将src所指向的字符串复制到dst。
 *
 * @param {char*} dst 目标字符串。
 * @param {const char*} src 原字符串。
 *
 * @return {char*} 返回目标字符串。
 */
char* tk_strcpy(char* dst, const char* src);

/**
 * @method tk_strncpy
 *
 * 将src所指向的字符串复制到dst，最多复制len个字符串。
 *
 * @param {char*} dst 目标字符串。
 * @param {const char*} src 原字符串。
 * @param {size_t} len 要复制的字符串个数。
 *
 * @return {char*} 返回目标字符串。
 */
char* tk_strncpy(char* dst, const char* src, size_t len);

/**
 * @method tk_strdup
 *
 * 字符串拷贝函数。
 *
 * @param {const char*} str 原字符串。
 *
 * @return {char*} 返回指向的复制字符串指针，如果失败则返回NULL。
 */
char* tk_strdup(const char* str);

/**
 * @method tk_wstrdup
 *
 * 宽字符串拷贝函数。
 *
 * @param {const wchar_t*} str 原宽字符串。
 *
 * @return {wchar_t*} 返回指向的复制宽字符串指针，如果失败则返回NULL。
 */
wchar_t* tk_wstrdup(const wchar_t* str);

/**
 * @method tk_strndup
 *
 * 字符串拷贝函数，最多复制len个字符串。
 *
 * @param {const char*} str 原字符串。
 * @param {uint32_t} len 要复制的字符串个数。
 *
 * @return {char*} 返回指向的复制字符串指针，如果失败则返回NULL。
 */
char* tk_strndup(const char* str, uint32_t len);

/**
 * @method tk_str_append
 *
 * 字符串追加函数。
 *
 * @param {char*} str 被追加字符串。
 * @param {uint32_t} max_len 字符串的最大长度。
 * @param {const char*} s 要追加的字符串。
 *
 * @return {ret_t} 返回RET_OK表示成功，否则表示失败。
 */
ret_t tk_str_append(char* str, uint32_t max_len, const char* s);

uint16_t* tk_memset16(uint16_t* buff, uint16_t val, uint32_t size);
uint32_t* tk_memset24(uint32_t* buff, void* val, uint32_t size);
uint32_t* tk_memset32(uint32_t* buff, uint32_t val, uint32_t size);
uint16_t* tk_memcpy16(uint16_t* dst, uint16_t* src, uint32_t size);
uint32_t* tk_memcpy32(uint32_t* dst, uint32_t* src, uint32_t size);
void* tk_pixel_copy(void* dst, const void* src, uint32_t size, uint8_t bpp);

/**
 * @method tk_snprintf
 *
 * 将可变参数(...)按照format格式化字符串，并将字符串复制到str中。
 *
 * @param {char*} str 目标字符串。
 * @param {size_t} size 拷贝字节数。
 * @param {const char*} format 格式化字符串。
 *
 * @return {int} 返回格式化后的字符串长度+1。
 */
int tk_snprintf(char* str, size_t size, const char* format, ...);

/**
 * @method tk_sscanf
 *
 * 从字符串读取格式化输入。
 *
 * @param {char*} str 要输入的字符串。
 * @param {const char*} format 格式化字符串。
 *
 * @return {int} 返回成功匹配和赋值的个数。
 */
int tk_sscanf(const char* str, const char* format, ...);

ret_t filename_to_name(const char* filename, char* str, uint32_t size);
ret_t filename_to_name_ex(const char* filename, char* str, uint32_t size, bool_t remove_extname);

/*expand include process instruction to file content: <?include filename="view_me.inc" ?>*/
ret_t xml_file_expand_read(const char* filename, str_t* s);

/*XXX:
 * 本函数仅供内部使用，可以提高速度，但使用不当极度危险。它要求dst为NULL或内存块的首地址，本函数调用之后，dst可能无效，请保留返回的地址*/
char* tk_str_copy(char* dst, const char* src);

ret_t dummy_destroy(void* data);
ret_t default_destroy(void* data);
int pointer_compare(const void* a, const void* b);
int compare_always_equal(const void* a, const void* b);

bool_t tk_is_valid_name(const char* name);
ret_t tk_replace_locale(const char* name, char out[TK_NAME_LEN + 1], const char* locale);

/**
 * @method tk_str_start_with
 *
 * 检查字符串是否以指定的字符串prefix开头。
 *
 * @param {const char*} str 要检查字符串。
 * @param {const char*} prefix 被检查的字符串。
 *
 * @return {bool_t} 返回TRUE表示是；否则表示不是。
 */
bool_t tk_str_start_with(const char* str, const char* prefix);
const char* tk_under_score_to_camel(const char* name, char* out, uint32_t max_out_size);

int32_t tk_pointer_to_int(const void* p);
void* tk_pointer_from_int(int32_t v);

/**
 * @method tk_str_toupper
 *
 * 将小写字母转换为大写字母。
 *
 * @param {char*} str 要被转换成大写字母的字符串。
 *
 * @return {char*} 返回转换后的大写字母字符串。
 */
char* tk_str_toupper(char* str);

/**
 * @method tk_str_tolower
 *
 * 将大写字母转换为小写字母。
 *
 * @param {char*} str 要被转换成小写字母的字符串。
 *
 * @return {char*} 返回转换后的小写字母字符串。
 */
char* tk_str_tolower(char* str);

const char* tk_normalize_key_name(const char* name, char fixed_name[TK_NAME_LEN + 1]);

END_C_DECLS

#endif /*TK_UTILS_H*/
