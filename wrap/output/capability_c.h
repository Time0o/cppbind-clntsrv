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

void l4_cap_l4_task_new_1(unsigned long cap, struct l4_cap_l4_task * __out);

void l4_cap_l4_task_new_2(unsigned int cap, struct l4_cap_l4_task * __out);

void l4_cap_l4_task_new_3(unsigned long idx, struct l4_cap_l4_task * __out);

void l4_cap_l4_task_new_4(unsigned int _1, struct l4_cap_l4_task * __out);

void l4_cap_l4_task_move(const struct l4_cap_l4_task * __self, const struct l4_cap_l4_task * src, struct l4_cap_l4_task * __out);

void l4_cap_l4_task_copy(const struct l4_cap_l4_task * __self, const struct l4_cap_l4_task * src, struct l4_cap_l4_task * __out);

unsigned long l4_cap_l4_task_cap(const struct l4_cap_l4_task * __self);

int l4_cap_l4_task_is_valid(const struct l4_cap_l4_task * __self);

unsigned long l4_cap_l4_task_snd_base(const struct l4_cap_l4_task * __self, unsigned int grant, unsigned long base);

void l4_cap_l4_task_invalidate(struct l4_cap_l4_task * __self);

void l4_cap_l4_kobject_new_1(unsigned long cap, struct l4_cap_l4_kobject * __out);

void l4_cap_l4_kobject_new_2(unsigned int cap, struct l4_cap_l4_kobject * __out);

void l4_cap_l4_kobject_new_3(unsigned long idx, struct l4_cap_l4_kobject * __out);

void l4_cap_l4_kobject_new_4(unsigned int _1, struct l4_cap_l4_kobject * __out);

void l4_cap_l4_kobject_move(const struct l4_cap_l4_kobject * __self, const struct l4_cap_l4_kobject * src, struct l4_cap_l4_kobject * __out);

void l4_cap_l4_kobject_copy(const struct l4_cap_l4_kobject * __self, const struct l4_cap_l4_kobject * src, struct l4_cap_l4_kobject * __out);

unsigned long l4_cap_l4_kobject_cap(const struct l4_cap_l4_kobject * __self);

int l4_cap_l4_kobject_is_valid(const struct l4_cap_l4_kobject * __self);

unsigned long l4_cap_l4_kobject_snd_base(const struct l4_cap_l4_kobject * __self, unsigned int grant, unsigned long base);

void l4_cap_l4_kobject_invalidate(struct l4_cap_l4_kobject * __self);

void l4_cap_l4_meta_new_1(unsigned long cap, struct l4_cap_l4_meta * __out);

void l4_cap_l4_meta_new_2(unsigned int cap, struct l4_cap_l4_meta * __out);

void l4_cap_l4_meta_new_3(unsigned long idx, struct l4_cap_l4_meta * __out);

void l4_cap_l4_meta_new_4(unsigned int _1, struct l4_cap_l4_meta * __out);

void l4_cap_l4_meta_move(const struct l4_cap_l4_meta * __self, const struct l4_cap_l4_meta * src, struct l4_cap_l4_meta * __out);

void l4_cap_l4_meta_copy(const struct l4_cap_l4_meta * __self, const struct l4_cap_l4_meta * src, struct l4_cap_l4_meta * __out);

unsigned long l4_cap_l4_meta_cap(const struct l4_cap_l4_meta * __self);

int l4_cap_l4_meta_is_valid(const struct l4_cap_l4_meta * __self);

unsigned long l4_cap_l4_meta_snd_base(const struct l4_cap_l4_meta * __self, unsigned int grant, unsigned long base);

void l4_cap_l4_meta_invalidate(struct l4_cap_l4_meta * __self);

unsigned long l4_cap_base_cap(const struct l4_cap_base * __self);

int l4_cap_base_is_valid(const struct l4_cap_base * __self);

unsigned long l4_cap_base_snd_base(const struct l4_cap_base * __self, unsigned int grant, unsigned long base);

int l4_cap_base_op_equalequal(const struct l4_cap_base * __self, const struct l4_cap_base * o);

int l4_cap_base_op_exclaimequal(const struct l4_cap_base * __self, const struct l4_cap_base * o);

void l4_cap_base_invalidate(struct l4_cap_base * __self);

void l4_cap_base_copy(const struct l4_cap_base * _1, struct l4_cap_base * __out);

void l4_cap_base_move(struct l4_cap_base * _1, struct l4_cap_base * __out);

void l4_cap_base_delete(struct l4_cap_base * __self);

void l4_cap_void_new_1(const void * p, struct l4_cap_void * __out);

void l4_cap_void_new_2(unsigned long cap, struct l4_cap_void * __out);

void l4_cap_void_new_3(unsigned int cap, struct l4_cap_void * __out);

void l4_cap_void_new_4(unsigned long idx, struct l4_cap_void * __out);

void l4_cap_void_new_5(unsigned int _1, struct l4_cap_void * __out);

void l4_cap_void_move_1(const struct l4_cap_void * __self, const struct l4_cap_void * src, struct l4_cap_void * __out);

void l4_cap_void_copy_1(const struct l4_cap_void * __self, const struct l4_cap_void * src, struct l4_cap_void * __out);

void l4_cap_void_copy_2(const struct l4_cap_void * _1, struct l4_cap_void * __out);

void l4_cap_void_move_2(struct l4_cap_void * _1, struct l4_cap_void * __out);

void l4_cap_void_delete(struct l4_cap_void * __self);

void l4_cap_void_new_void(const struct l4_cap_void * o, struct l4_cap_void * __out);

unsigned long l4_cap_void_cap(const struct l4_cap_void * __self);

int l4_cap_void_is_valid(const struct l4_cap_void * __self);

unsigned long l4_cap_void_snd_base(const struct l4_cap_void * __self, unsigned int grant, unsigned long base);

int l4_cap_void_op_equalequal(const struct l4_cap_void * __self, const struct l4_cap_base * o);

int l4_cap_void_op_exclaimequal(const struct l4_cap_void * __self, const struct l4_cap_base * o);

void l4_cap_void_invalidate(struct l4_cap_void * __self);

void l4_cap_calc_new_1(unsigned long cap, struct l4_cap_calc * __out);

void l4_cap_calc_new_2(unsigned int cap, struct l4_cap_calc * __out);

void l4_cap_calc_new_3(unsigned long idx, struct l4_cap_calc * __out);

void l4_cap_calc_new_4(unsigned int _1, struct l4_cap_calc * __out);

void l4_cap_calc_move_1(const struct l4_cap_calc * __self, const struct l4_cap_calc * src, struct l4_cap_calc * __out);

void l4_cap_calc_copy_1(const struct l4_cap_calc * __self, const struct l4_cap_calc * src, struct l4_cap_calc * __out);

void l4_cap_calc_access(const struct l4_cap_calc * __self, struct calc * __out);

void l4_cap_calc_copy_2(const struct l4_cap_calc * _1, struct l4_cap_calc * __out);

void l4_cap_calc_move_2(struct l4_cap_calc * _1, struct l4_cap_calc * __out);

void l4_cap_calc_delete(struct l4_cap_calc * __self);

void l4_cap_calc_new_calc(const struct l4_cap_calc * o, struct l4_cap_calc * __out);

unsigned long l4_cap_calc_cap(const struct l4_cap_calc * __self);

int l4_cap_calc_is_valid(const struct l4_cap_calc * __self);

unsigned long l4_cap_calc_snd_base(const struct l4_cap_calc * __self, unsigned int grant, unsigned long base);

int l4_cap_calc_op_equalequal(const struct l4_cap_calc * __self, const struct l4_cap_base * o);

int l4_cap_calc_op_exclaimequal(const struct l4_cap_calc * __self, const struct l4_cap_base * o);

void l4_cap_calc_invalidate(struct l4_cap_calc * __self);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // GUARD_CAPABILITY_C_H