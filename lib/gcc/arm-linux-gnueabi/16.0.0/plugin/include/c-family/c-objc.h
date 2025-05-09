/* Definitions of Objective-C front-end entry points used for C and C++.
   Copyright (C) 1987-2025 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

#ifndef GCC_C_COMMON_OBJC_H
#define GCC_C_COMMON_OBJC_H

/* ObjC ivar visibility types.  */
enum GTY(()) objc_ivar_visibility_kind {
  OBJC_IVAR_VIS_PROTECTED = 0,
  OBJC_IVAR_VIS_PUBLIC    = 1,
  OBJC_IVAR_VIS_PRIVATE   = 2,
  OBJC_IVAR_VIS_PACKAGE   = 3
};

/* ObjC property attribute kinds.
   These have two fields; a unique value (that identifies which attribute)
   and a group key that indicates membership of an exclusion group.
   Only one member may be present from an exclusion group in a given attribute
   list.
   getters and setters have additional rules, since they are excluded from
   non-overlapping group sets.  */

enum objc_property_attribute_group
{
  OBJC_PROPATTR_GROUP_UNKNOWN = 0,
  OBJC_PROPATTR_GROUP_GETTER,
  OBJC_PROPATTR_GROUP_SETTER,
  OBJC_PROPATTR_GROUP_READWRITE,
  OBJC_PROPATTR_GROUP_ASSIGN,
  OBJC_PROPATTR_GROUP_ATOMIC,
  OBJC_PROPATTR_GROUP_NULLABLE,
  OBJC_PROPATTR_GROUP_CLASS,
  OBJC_PROPATTR_GROUP_MAX
};

enum objc_property_attribute_kind
{
  OBJC_PROPERTY_ATTR_UNKNOWN =		0|OBJC_PROPATTR_GROUP_UNKNOWN,
  OBJC_PROPERTY_ATTR_GETTER =		( 1 << 8)|OBJC_PROPATTR_GROUP_GETTER,
  OBJC_PROPERTY_ATTR_SETTER =		( 2 << 8)|OBJC_PROPATTR_GROUP_SETTER,
  OBJC_PROPERTY_ATTR_READONLY =		( 3 << 8)|OBJC_PROPATTR_GROUP_READWRITE,
  OBJC_PROPERTY_ATTR_READWRITE =	( 4 << 8)|OBJC_PROPATTR_GROUP_READWRITE,
  OBJC_PROPERTY_ATTR_ASSIGN =		( 5 << 8)|OBJC_PROPATTR_GROUP_ASSIGN,
  OBJC_PROPERTY_ATTR_RETAIN =		( 6 << 8)|OBJC_PROPATTR_GROUP_ASSIGN,
  OBJC_PROPERTY_ATTR_COPY =		( 7 << 8)|OBJC_PROPATTR_GROUP_ASSIGN,
  OBJC_PROPERTY_ATTR_ATOMIC =		( 8 << 8)|OBJC_PROPATTR_GROUP_ATOMIC,
  OBJC_PROPERTY_ATTR_NONATOMIC =	( 9 << 8)|OBJC_PROPATTR_GROUP_ATOMIC,
  OBJC_PROPERTY_ATTR_NULL_UNSPECIFIED = (12 << 8)|OBJC_PROPATTR_GROUP_NULLABLE,
  OBJC_PROPERTY_ATTR_NULLABLE =		(13 << 8)|OBJC_PROPATTR_GROUP_NULLABLE,
  OBJC_PROPERTY_ATTR_NONNULL =		(14 << 8)|OBJC_PROPATTR_GROUP_NULLABLE,
  OBJC_PROPERTY_ATTR_NULL_RESETTABLE =	(15 << 8)|OBJC_PROPATTR_GROUP_NULLABLE,
  OBJC_PROPERTY_ATTR_CLASS =		(16 << 8)|OBJC_PROPATTR_GROUP_CLASS,
  OBJC_PROPERTY_ATTR_MAX =		(255 << 8|OBJC_PROPATTR_GROUP_MAX)
};

#define OBJC_PROPATTR_GROUP_MASK 0x0f

/* To contain parsed, but unverified, information about a single property
   attribute.  */
struct property_attribute_info
{
  property_attribute_info () = default;
  property_attribute_info (tree name, location_t loc,
			   enum objc_property_attribute_kind k)
   : name (name), ident (NULL_TREE), prop_loc (loc), prop_kind (k),
     parse_error (false) {}

  enum objc_property_attribute_group group ()
    {
      return (enum objc_property_attribute_group)
	((unsigned)prop_kind & OBJC_PROPATTR_GROUP_MASK);
    }

  tree name; /* Name of the attribute.  */
  tree ident; /* For getter/setter cases, the method/selector name.  */
  location_t prop_loc; /* Extended location covering the parsed attr.  */
  enum objc_property_attribute_kind prop_kind : 16;
  unsigned parse_error : 1; /* The C/C++ parser saw an error in this attr.  */
};

extern enum objc_property_attribute_kind objc_prop_attr_kind_for_rid (enum rid);

/* Objective-C / Objective-C++ entry points.  */

/* The following ObjC/ObjC++ functions are called by the C and/or C++
   front-ends; they all must have corresponding stubs in stub-objc.cc.  */
extern void objc_write_global_declarations (void);
extern tree objc_is_class_name (tree);
extern tree objc_is_object_ptr (tree);
extern void objc_check_decl (tree);
extern void objc_check_global_decl (tree);
extern tree objc_common_type (tree, tree);
extern bool objc_compare_types (tree, tree, int, tree);
extern bool objc_have_common_type (tree, tree, int, tree);
extern bool objc_diagnose_private_ivar (tree);
extern void objc_volatilize_decl (tree);
extern tree objc_rewrite_function_call (tree, tree);
extern tree objc_message_selector (void);
extern tree objc_lookup_ivar (tree, tree);
extern void objc_clear_super_receiver (void);
extern int objc_is_public (tree, tree);
extern tree objc_is_id (tree);
extern void objc_declare_alias (tree, tree);
extern void objc_declare_class (tree);
extern void objc_declare_protocol (tree, tree);
extern tree objc_build_message_expr (tree, tree);
extern tree objc_finish_message_expr (tree, tree, tree, tree*);
extern tree objc_build_selector_expr (location_t, tree);
extern tree objc_build_protocol_expr (tree);
extern tree objc_build_encode_expr (tree);
extern tree objc_build_string_object (tree);
extern tree objc_get_protocol_qualified_type (tree, tree);
extern tree objc_get_class_reference (tree);
extern tree objc_get_class_ivars (tree);
extern bool objc_detect_field_duplicates (bool);
extern void objc_start_class_interface (tree, location_t, tree, tree, tree);
extern void objc_start_category_interface (tree, tree, tree, tree);
extern void objc_start_protocol (tree, tree, tree);
extern void objc_continue_interface (void);
extern void objc_finish_interface (void);
extern void objc_start_class_implementation (tree, tree);
extern void objc_start_category_implementation (tree, tree);
extern void objc_continue_implementation (void);
extern void objc_finish_implementation (void);
extern void objc_set_visibility (objc_ivar_visibility_kind);
extern tree objc_build_method_signature (bool, tree, tree, tree, bool);
extern void objc_add_method_declaration (bool, tree, tree);
extern bool objc_start_method_definition (bool, tree, tree, tree);
extern void objc_finish_method_definition (tree);
extern void objc_add_instance_variable (tree);
extern tree objc_build_keyword_decl (tree, tree, tree, tree);
extern tree objc_build_throw_stmt (location_t, tree);
extern void objc_begin_try_stmt (location_t, tree);
extern tree objc_finish_try_stmt (void);
extern void objc_begin_catch_clause (tree);
extern void objc_finish_catch_clause (void);
extern void objc_build_finally_clause (location_t, tree);
extern tree objc_build_synchronized (location_t, tree, tree);
extern int objc_static_init_needed_p (void);
extern tree objc_generate_static_init_call (tree);
extern tree objc_generate_write_barrier (tree, enum tree_code, tree);
extern void objc_set_method_opt (bool);
extern void objc_finish_foreach_loop (location_t, tree, tree, tree, tree, tree);
extern bool  objc_method_decl (enum tree_code);
extern void objc_add_property_declaration (location_t, tree,
					   vec<property_attribute_info *>&);
extern tree objc_maybe_build_component_ref (tree, tree);
extern tree objc_build_class_component_ref (tree, tree);
extern tree objc_maybe_build_modify_expr (tree, tree);
extern tree objc_build_incr_expr_for_property_ref (location_t, enum tree_code,
						   tree, tree);
extern void objc_add_synthesize_declaration (location_t, tree);
extern void objc_add_dynamic_declaration (location_t, tree);
extern const char * objc_maybe_printable_name (tree, int);
extern bool objc_is_property_ref (tree);
extern bool objc_non_constant_expr_p (tree);
extern bool objc_string_ref_type_p (tree);
extern void objc_check_format_arg (tree, tree);
extern void objc_finish_function (void);
extern void objc_maybe_warn_exceptions (location_t);

/* The following are provided by the C and C++ front-ends, and called by
   ObjC/ObjC++.  */
extern void *objc_get_current_scope (void);
extern void objc_mark_locals_volatile (void *);

#endif /* ! GCC_C_COMMON_OBJC_H */
