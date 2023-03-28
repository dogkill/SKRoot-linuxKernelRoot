#ifndef _SU_INSTALL_HELPER_H_
#define _SU_INSTALL_HELPER_H_
#include <iostream>
std::string install_su(const char* str_root_key, const char* base_path, const char* origin_su_full_path, ssize_t & err, const char* su_hide_folder_head_flag = "su");

std::string safe_install_su(const char* str_root_key, const char* base_path, const char* origin_su_full_path, ssize_t& err, const char* su_hide_folder_head_flag = "su");

ssize_t uninstall_su(const char* str_root_key, const char* base_path, const char* su_hide_folder_head_flag = "su" );
//fork��ȫ�汾�������ڰ�׿APPֱ�ӵ��ã�
ssize_t safe_uninstall_su(const char* str_root_key, const char* base_path, const char* su_hide_folder_head_flag = "su");

#endif /* _SU_INSTALL_HELPER_H_ */
