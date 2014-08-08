/*
 * Copyright 2008 sempr <iamsempr@gmail.com>
 *
 * This file is part of HUSTOJ.
 *
 * HUSTOJ is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * HUSTOJ is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with HUSTOJ. if not, see <http://www.gnu.org/licenses/>.
 */
#include <sys/syscall.h>
#define HOJ_MAX_LIMIT -1
#ifdef __i386


int LANG_JV[256]={295,SYS_fcntl64,SYS_getdents64 , SYS_ugetrlimit, SYS_rt_sigprocmask, SYS_futex, SYS_read, SYS_mmap2, SYS_stat64, SYS_open, SYS_close, SYS_execve, SYS_access, SYS_brk, SYS_readlink, SYS_munmap, SYS_close, SYS_uname, SYS_clone, SYS_uname, SYS_mprotect, SYS_rt_sigaction, SYS_sigprocmask, SYS_getrlimit, SYS_fstat64, SYS_getuid32, SYS_getgid32, SYS_geteuid32, SYS_getegid32, SYS_set_thread_area, SYS_set_tid_address, SYS_set_robust_list, SYS_exit_group, 0};
int LANG_JC[256]={HOJ_MAX_LIMIT,HOJ_MAX_LIMIT,  HOJ_MAX_LIMIT, HOJ_MAX_LIMIT, HOJ_MAX_LIMIT, HOJ_MAX_LIMIT,  HOJ_MAX_LIMIT,HOJ_MAX_LIMIT,  HOJ_MAX_LIMIT,  HOJ_MAX_LIMIT,  HOJ_MAX_LIMIT, HOJ_MAX_LIMIT, HOJ_MAX_LIMIT, HOJ_MAX_LIMIT, HOJ_MAX_LIMIT, HOJ_MAX_LIMIT, HOJ_MAX_LIMIT,HOJ_MAX_LIMIT, HOJ_MAX_LIMIT, HOJ_MAX_LIMIT, HOJ_MAX_LIMIT, HOJ_MAX_LIMIT,HOJ_MAX_LIMIT,  HOJ_MAX_LIMIT,  HOJ_MAX_LIMIT, HOJ_MAX_LIMIT, HOJ_MAX_LIMIT, HOJ_MAX_LIMIT,  HOJ_MAX_LIMIT, HOJ_MAX_LIMIT,HOJ_MAX_LIMIT,  HOJ_MAX_LIMIT, HOJ_MAX_LIMIT,0};

int LANG_CV[256]={8,SYS_time,SYS_read, SYS_uname, SYS_write,  SYS_execve, SYS_access, SYS_brk, SYS_munmap, SYS_mprotect, SYS_mmap2, SYS_fstat64, SYS_set_thread_area,SYS_readlink, 252,0};
int LANG_CC[256]={HOJ_MAX_LIMIT, HOJ_MAX_LIMIT,HOJ_MAX_LIMIT,  HOJ_MAX_LIMIT,  HOJ_MAX_LIMIT,1, HOJ_MAX_LIMIT, HOJ_MAX_LIMIT,HOJ_MAX_LIMIT, HOJ_MAX_LIMIT,HOJ_MAX_LIMIT,HOJ_MAX_LIMIT, HOJ_MAX_LIMIT,  2,HOJ_MAX_LIMIT,0};

#else

  
int LANG_JV[256]={61,22,6,33,8,13,16,111,110,39,79,SYS_fcntl,SYS_getdents64 , SYS_getrlimit, SYS_rt_sigprocmask, SYS_futex, SYS_read, SYS_mmap, SYS_stat, SYS_open, SYS_close, SYS_execve, SYS_access, SYS_brk, SYS_readlink, SYS_munmap, SYS_close, SYS_uname, SYS_clone, SYS_uname, SYS_mprotect, SYS_rt_sigaction, SYS_getrlimit, SYS_fstat, SYS_getuid, SYS_getgid, SYS_geteuid, SYS_getegid, SYS_set_thread_area, SYS_set_tid_address, SYS_set_robust_list, SYS_exit_group,158, 0};
int LANG_JC[256]={HOJ_MAX_LIMIT,HOJ_MAX_LIMIT,HOJ_MAX_LIMIT,HOJ_MAX_LIMIT,HOJ_MAX_LIMIT,HOJ_MAX_LIMIT,HOJ_MAX_LIMIT,HOJ_MAX_LIMIT,HOJ_MAX_LIMIT,HOJ_MAX_LIMIT,HOJ_MAX_LIMIT,HOJ_MAX_LIMIT,         HOJ_MAX_LIMIT,              HOJ_MAX_LIMIT,            HOJ_MAX_LIMIT,                 HOJ_MAX_LIMIT,        HOJ_MAX_LIMIT,       HOJ_MAX_LIMIT,        HOJ_MAX_LIMIT,         HOJ_MAX_LIMIT,       HOJ_MAX_LIMIT,        HOJ_MAX_LIMIT,          HOJ_MAX_LIMIT,         HOJ_MAX_LIMIT,      HOJ_MAX_LIMIT,           HOJ_MAX_LIMIT,         HOJ_MAX_LIMIT, HOJ_MAX_LIMIT, HOJ_MAX_LIMIT, HOJ_MAX_LIMIT,  HOJ_MAX_LIMIT, HOJ_MAX_LIMIT, HOJ_MAX_LIMIT, HOJ_MAX_LIMIT, HOJ_MAX_LIMIT, HOJ_MAX_LIMIT,HOJ_MAX_LIMIT, HOJ_MAX_LIMIT, HOJ_MAX_LIMIT,HOJ_MAX_LIMIT,HOJ_MAX_LIMIT,HOJ_MAX_LIMIT,HOJ_MAX_LIMIT,0};

int LANG_CV[256]={8,SYS_time,SYS_read, SYS_uname, SYS_write, SYS_execve, SYS_access, SYS_brk, SYS_munmap, SYS_mprotect, SYS_mmap, SYS_fstat, SYS_set_thread_area, 252,SYS_arch_prctl,231,0};
int LANG_CC[256]={HOJ_MAX_LIMIT,HOJ_MAX_LIMIT,HOJ_MAX_LIMIT, HOJ_MAX_LIMIT, HOJ_MAX_LIMIT,HOJ_MAX_LIMIT,  HOJ_MAX_LIMIT,  HOJ_MAX_LIMIT, HOJ_MAX_LIMIT, HOJ_MAX_LIMIT, HOJ_MAX_LIMIT, HOJ_MAX_LIMIT, HOJ_MAX_LIMIT, 2,HOJ_MAX_LIMIT,HOJ_MAX_LIMIT,0};

#endif