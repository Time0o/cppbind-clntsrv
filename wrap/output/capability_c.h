#ifndef GUARD_CAPABILITY_C_H
#define GUARD_CAPABILITY_C_H

#ifdef __cplusplus
extern "C" {
#endif

#include "cppbind/c/c_util_c.h"

typedef unsigned long l4_cap_idx_t;

struct calc;
struct l4_cap_calc;
struct l4_cap_l4_kobject;
struct l4_cap_l4_meta;
struct l4_cap_l4_task;
struct l4_cap_void;
struct l4_cap_base;

struct l4_cap_calc
{
  union {
    char mem[64];
    void *ptr;
  } obj;

  int is_initialized;
  int is_const;
  int is_owning;
};

struct l4_cap_l4_kobject
{
  union {
    char mem[64];
    void *ptr;
  } obj;

  int is_initialized;
  int is_const;
  int is_owning;
};

struct l4_cap_l4_meta
{
  union {
    char mem[64];
    void *ptr;
  } obj;

  int is_initialized;
  int is_const;
  int is_owning;
};

struct l4_cap_l4_task
{
  union {
    char mem[64];
    void *ptr;
  } obj;

  int is_initialized;
  int is_const;
  int is_owning;
};

struct l4_cap_void
{
  union {
    char mem[64];
    void *ptr;
  } obj;

  int is_initialized;
  int is_const;
  int is_owning;
};

struct l4_cap_base
{
  union {
    char mem[64];
    void *ptr;
  } obj;

  int is_initialized;
  int is_const;
  int is_owning;
};

l4_cap_idx_t l4_cap_l4_task_new_1(unsigned long cap);

l4_cap_idx_t l4_cap_l4_task_new_2(unsigned int cap);

l4_cap_idx_t l4_cap_l4_task_new_3(unsigned long idx);

l4_cap_idx_t l4_cap_l4_task_new_4(unsigned int _1);

l4_cap_idx_t l4_cap_l4_task_move(l4_cap_idx_t __self, l4_cap_idx_t src);

l4_cap_idx_t l4_cap_l4_task_copy(l4_cap_idx_t __self, l4_cap_idx_t src);

unsigned long l4_cap_l4_task_cap(l4_cap_idx_t __self);

int l4_cap_l4_task_is_valid(l4_cap_idx_t __self);

unsigned long l4_cap_l4_task_snd_base(l4_cap_idx_t __self, unsigned int grant, unsigned long base);

void l4_cap_l4_task_invalidate(l4_cap_idx_t __self);

l4_cap_idx_t l4_cap_l4_kobject_new_1(unsigned long cap);

l4_cap_idx_t l4_cap_l4_kobject_new_2(unsigned int cap);

l4_cap_idx_t l4_cap_l4_kobject_new_3(unsigned long idx);

l4_cap_idx_t l4_cap_l4_kobject_new_4(unsigned int _1);

l4_cap_idx_t l4_cap_l4_kobject_move(l4_cap_idx_t __self, l4_cap_idx_t src);

l4_cap_idx_t l4_cap_l4_kobject_copy(l4_cap_idx_t __self, l4_cap_idx_t src);

unsigned long l4_cap_l4_kobject_cap(l4_cap_idx_t __self);

int l4_cap_l4_kobject_is_valid(l4_cap_idx_t __self);

unsigned long l4_cap_l4_kobject_snd_base(l4_cap_idx_t __self, unsigned int grant, unsigned long base);

void l4_cap_l4_kobject_invalidate(l4_cap_idx_t __self);

l4_cap_idx_t l4_cap_l4_meta_new_1(unsigned long cap);

l4_cap_idx_t l4_cap_l4_meta_new_2(unsigned int cap);

l4_cap_idx_t l4_cap_l4_meta_new_3(unsigned long idx);

l4_cap_idx_t l4_cap_l4_meta_new_4(unsigned int _1);

l4_cap_idx_t l4_cap_l4_meta_move(l4_cap_idx_t __self, l4_cap_idx_t src);

l4_cap_idx_t l4_cap_l4_meta_copy(l4_cap_idx_t __self, l4_cap_idx_t src);

unsigned long l4_cap_l4_meta_cap(l4_cap_idx_t __self);

int l4_cap_l4_meta_is_valid(l4_cap_idx_t __self);

unsigned long l4_cap_l4_meta_snd_base(l4_cap_idx_t __self, unsigned int grant, unsigned long base);

void l4_cap_l4_meta_invalidate(l4_cap_idx_t __self);

unsigned long l4_cap_base_cap(const struct l4_cap_base * __self);

int l4_cap_base_is_valid(const struct l4_cap_base * __self);

unsigned long l4_cap_base_snd_base(const struct l4_cap_base * __self, unsigned int grant, unsigned long base);

int l4_cap_base_op_equalequal(const struct l4_cap_base * __self, const struct l4_cap_base * o);

int l4_cap_base_op_exclaimequal(const struct l4_cap_base * __self, const struct l4_cap_base * o);

void l4_cap_base_invalidate(struct l4_cap_base * __self);

struct l4_cap_base l4_cap_base_copy(const struct l4_cap_base * _1);

struct l4_cap_base l4_cap_base_move(struct l4_cap_base * _1);

void l4_cap_base_delete(struct l4_cap_base * __self);

l4_cap_idx_t l4_cap_void_new_1(const void * p);

l4_cap_idx_t l4_cap_void_new_2(unsigned long cap);

l4_cap_idx_t l4_cap_void_new_3(unsigned int cap);

l4_cap_idx_t l4_cap_void_new_4(unsigned long idx);

l4_cap_idx_t l4_cap_void_new_5(unsigned int _1);

l4_cap_idx_t l4_cap_void_move_1(l4_cap_idx_t __self, l4_cap_idx_t src);

l4_cap_idx_t l4_cap_void_copy_1(l4_cap_idx_t __self, l4_cap_idx_t src);

l4_cap_idx_t l4_cap_void_copy_2(l4_cap_idx_t _1);

l4_cap_idx_t l4_cap_void_move_2(l4_cap_idx_t _1);

void l4_cap_void_delete(l4_cap_idx_t __self);

l4_cap_idx_t l4_cap_void_new_void(l4_cap_idx_t o);

unsigned long l4_cap_void_cap(l4_cap_idx_t __self);

int l4_cap_void_is_valid(l4_cap_idx_t __self);

unsigned long l4_cap_void_snd_base(l4_cap_idx_t __self, unsigned int grant, unsigned long base);

int l4_cap_void_op_equalequal(l4_cap_idx_t __self, const struct l4_cap_base * o);

int l4_cap_void_op_exclaimequal(l4_cap_idx_t __self, const struct l4_cap_base * o);

void l4_cap_void_invalidate(l4_cap_idx_t __self);

l4_cap_idx_t l4_cap_calc_new_1(unsigned long cap);

l4_cap_idx_t l4_cap_calc_new_2(unsigned int cap);

l4_cap_idx_t l4_cap_calc_new_3(unsigned long idx);

l4_cap_idx_t l4_cap_calc_new_4(unsigned int _1);

l4_cap_idx_t l4_cap_calc_move_1(l4_cap_idx_t __self, l4_cap_idx_t src);

l4_cap_idx_t l4_cap_calc_copy_1(l4_cap_idx_t __self, l4_cap_idx_t src);

struct calc l4_cap_calc_access(l4_cap_idx_t __self);

l4_cap_idx_t l4_cap_calc_copy_2(l4_cap_idx_t _1);

l4_cap_idx_t l4_cap_calc_move_2(l4_cap_idx_t _1);

void l4_cap_calc_delete(l4_cap_idx_t __self);

l4_cap_idx_t l4_cap_calc_new_calc(l4_cap_idx_t o);

unsigned long l4_cap_calc_cap(l4_cap_idx_t __self);

int l4_cap_calc_is_valid(l4_cap_idx_t __self);

unsigned long l4_cap_calc_snd_base(l4_cap_idx_t __self, unsigned int grant, unsigned long base);

int l4_cap_calc_op_equalequal(l4_cap_idx_t __self, const struct l4_cap_base * o);

int l4_cap_calc_op_exclaimequal(l4_cap_idx_t __self, const struct l4_cap_base * o);

void l4_cap_calc_invalidate(l4_cap_idx_t __self);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // GUARD_CAPABILITY_C_H