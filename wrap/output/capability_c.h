#ifndef GUARD_CAPABILITY_C_H
#define GUARD_CAPABILITY_C_H

#ifdef __cplusplus
extern "C" {
#endif

#include "cppbind/c/c_util_c.h"

typedef unsigned long l4_cap_idx_t;
typedef unsigned long l4_umword_t;

struct calc;

extern unsigned int L4_CAP_BASE_NO_INIT;

extern unsigned long L4_CAP_BASE_INVALID;

l4_cap_idx_t l4_cap_l4_task_new_1(unsigned long cap);

l4_cap_idx_t l4_cap_l4_task_new_2(unsigned int cap);

l4_cap_idx_t l4_cap_l4_task_new_3(l4_cap_idx_t idx);

l4_cap_idx_t l4_cap_l4_task_new_4(unsigned int _1);

l4_cap_idx_t l4_cap_l4_task_move(l4_cap_idx_t __self, l4_cap_idx_t src);

l4_cap_idx_t l4_cap_l4_task_copy(l4_cap_idx_t __self, l4_cap_idx_t src);

l4_cap_idx_t l4_cap_l4_task_cap(l4_cap_idx_t __self);

int l4_cap_l4_task_is_valid(l4_cap_idx_t __self);

l4_umword_t l4_cap_l4_task_snd_base(l4_cap_idx_t __self, unsigned int grant, l4_cap_idx_t base);

void l4_cap_l4_task_invalidate(l4_cap_idx_t __self);

l4_cap_idx_t l4_cap_l4_kobject_new_1(unsigned long cap);

l4_cap_idx_t l4_cap_l4_kobject_new_2(unsigned int cap);

l4_cap_idx_t l4_cap_l4_kobject_new_3(l4_cap_idx_t idx);

l4_cap_idx_t l4_cap_l4_kobject_new_4(unsigned int _1);

l4_cap_idx_t l4_cap_l4_kobject_move(l4_cap_idx_t __self, l4_cap_idx_t src);

l4_cap_idx_t l4_cap_l4_kobject_copy(l4_cap_idx_t __self, l4_cap_idx_t src);

l4_cap_idx_t l4_cap_l4_kobject_cap(l4_cap_idx_t __self);

int l4_cap_l4_kobject_is_valid(l4_cap_idx_t __self);

l4_umword_t l4_cap_l4_kobject_snd_base(l4_cap_idx_t __self, unsigned int grant, l4_cap_idx_t base);

void l4_cap_l4_kobject_invalidate(l4_cap_idx_t __self);

l4_cap_idx_t l4_cap_l4_meta_new_1(unsigned long cap);

l4_cap_idx_t l4_cap_l4_meta_new_2(unsigned int cap);

l4_cap_idx_t l4_cap_l4_meta_new_3(l4_cap_idx_t idx);

l4_cap_idx_t l4_cap_l4_meta_new_4(unsigned int _1);

l4_cap_idx_t l4_cap_l4_meta_move(l4_cap_idx_t __self, l4_cap_idx_t src);

l4_cap_idx_t l4_cap_l4_meta_copy(l4_cap_idx_t __self, l4_cap_idx_t src);

l4_cap_idx_t l4_cap_l4_meta_cap(l4_cap_idx_t __self);

int l4_cap_l4_meta_is_valid(l4_cap_idx_t __self);

l4_umword_t l4_cap_l4_meta_snd_base(l4_cap_idx_t __self, unsigned int grant, l4_cap_idx_t base);

void l4_cap_l4_meta_invalidate(l4_cap_idx_t __self);

l4_cap_idx_t l4_cap_void_new_1(const void * p);

l4_cap_idx_t l4_cap_void_new_2(unsigned long cap);

l4_cap_idx_t l4_cap_void_new_3(unsigned int cap);

l4_cap_idx_t l4_cap_void_new_4(l4_cap_idx_t idx);

l4_cap_idx_t l4_cap_void_new_5(unsigned int _1);

l4_cap_idx_t l4_cap_void_move_1(l4_cap_idx_t __self, l4_cap_idx_t src);

l4_cap_idx_t l4_cap_void_copy_1(l4_cap_idx_t __self, l4_cap_idx_t src);

l4_cap_idx_t l4_cap_void_copy_2(l4_cap_idx_t _1);

l4_cap_idx_t l4_cap_void_move_2(l4_cap_idx_t _1);

void l4_cap_void_delete(l4_cap_idx_t __self);

l4_cap_idx_t l4_cap_void_new_void(l4_cap_idx_t o);

l4_cap_idx_t l4_cap_void_cap(l4_cap_idx_t __self);

int l4_cap_void_is_valid(l4_cap_idx_t __self);

l4_umword_t l4_cap_void_snd_base(l4_cap_idx_t __self, unsigned int grant, l4_cap_idx_t base);

void l4_cap_void_invalidate(l4_cap_idx_t __self);

l4_cap_idx_t l4_cap_calc_new_1(unsigned long cap);

l4_cap_idx_t l4_cap_calc_new_2(unsigned int cap);

l4_cap_idx_t l4_cap_calc_new_3(l4_cap_idx_t idx);

l4_cap_idx_t l4_cap_calc_new_4(unsigned int _1);

l4_cap_idx_t l4_cap_calc_move_1(l4_cap_idx_t __self, l4_cap_idx_t src);

l4_cap_idx_t l4_cap_calc_copy_1(l4_cap_idx_t __self, l4_cap_idx_t src);

struct calc l4_cap_calc_access(l4_cap_idx_t __self);

l4_cap_idx_t l4_cap_calc_copy_2(l4_cap_idx_t _1);

l4_cap_idx_t l4_cap_calc_move_2(l4_cap_idx_t _1);

void l4_cap_calc_delete(l4_cap_idx_t __self);

l4_cap_idx_t l4_cap_calc_new_calc(l4_cap_idx_t o);

l4_cap_idx_t l4_cap_calc_cap(l4_cap_idx_t __self);

int l4_cap_calc_is_valid(l4_cap_idx_t __self);

l4_umword_t l4_cap_calc_snd_base(l4_cap_idx_t __self, unsigned int grant, l4_cap_idx_t base);

void l4_cap_calc_invalidate(l4_cap_idx_t __self);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // GUARD_CAPABILITY_C_H
