/* /////////////////////////////////////////////////////////////////////////
 * File:        pantheios/internal/generated/log_sev_functions.hpp
 *
 * Purpose:     Definitions of the log_<LEVEL>() functions
 *
 * Generated:   11th November 2008
 *
 * Status:      This file is auto-generated: DO NOT EDIT!
 *
 * Copyright:   The copyright restrictions of the Pantheios library,
 *              enumerated in the header file <pantheios/pantheios.h>,
 *              apply to this file
 *
 * ////////////////////////////////////////////////////////////////////// */


#ifndef PANTHEIOS_INCL_PANTHEIOS_HPP_PANTHEIOS
# error This file is included by the Pantheios API, and cannot be included directly
#endif /* !PANTHEIOS_INCL_PANTHEIOS_HPP_PANTHEIOS */


#if PANTHEIOS_APPL_PARAMS_LIMIT >= 1

/** Logs 1 object of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_EMERGENCY EMERGENCY\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0>
inline int log_EMERGENCY(T0 const& v0)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_EMERGENCY))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_1(PANTHEIOS_SEV_EMERGENCY
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 2

/** Logs 2 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_EMERGENCY EMERGENCY\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1>
inline int log_EMERGENCY(   T0 const  &v0
              , T1 const& v1)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_EMERGENCY))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_2(PANTHEIOS_SEV_EMERGENCY
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 3

/** Logs 3 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_EMERGENCY EMERGENCY\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2>
inline int log_EMERGENCY(   T0 const  &v0
              , T1 const& v1, T2 const& v2)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_EMERGENCY))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_3(PANTHEIOS_SEV_EMERGENCY
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 4

/** Logs 4 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_EMERGENCY EMERGENCY\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3>
inline int log_EMERGENCY(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_EMERGENCY))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_4(PANTHEIOS_SEV_EMERGENCY
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 5

/** Logs 5 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_EMERGENCY EMERGENCY\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4>
inline int log_EMERGENCY(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_EMERGENCY))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_5(PANTHEIOS_SEV_EMERGENCY
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 6

/** Logs 6 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_EMERGENCY EMERGENCY\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5>
inline int log_EMERGENCY(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_EMERGENCY))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_6(PANTHEIOS_SEV_EMERGENCY
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 7

/** Logs 7 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_EMERGENCY EMERGENCY\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline int log_EMERGENCY(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_EMERGENCY))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_7(PANTHEIOS_SEV_EMERGENCY
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 8

/** Logs 8 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_EMERGENCY EMERGENCY\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline int log_EMERGENCY(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_EMERGENCY))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_8(PANTHEIOS_SEV_EMERGENCY
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 9

/** Logs 9 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_EMERGENCY EMERGENCY\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline int log_EMERGENCY(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_EMERGENCY))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_9(PANTHEIOS_SEV_EMERGENCY
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 10

/** Logs 10 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_EMERGENCY EMERGENCY\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
inline int log_EMERGENCY(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_EMERGENCY))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_10(PANTHEIOS_SEV_EMERGENCY
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 11

/** Logs 11 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_EMERGENCY EMERGENCY\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
inline int log_EMERGENCY(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_EMERGENCY))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_11(PANTHEIOS_SEV_EMERGENCY
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 12

/** Logs 12 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_EMERGENCY EMERGENCY\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
inline int log_EMERGENCY(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_EMERGENCY))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_12(PANTHEIOS_SEV_EMERGENCY
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 13

/** Logs 13 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_EMERGENCY EMERGENCY\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
inline int log_EMERGENCY(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_EMERGENCY))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_13(PANTHEIOS_SEV_EMERGENCY
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 14

/** Logs 14 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_EMERGENCY EMERGENCY\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
inline int log_EMERGENCY(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_EMERGENCY))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_14(PANTHEIOS_SEV_EMERGENCY
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 15

/** Logs 15 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_EMERGENCY EMERGENCY\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
inline int log_EMERGENCY(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_EMERGENCY))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_15(PANTHEIOS_SEV_EMERGENCY
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 16

/** Logs 16 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_EMERGENCY EMERGENCY\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
inline int log_EMERGENCY(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_EMERGENCY))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_16(PANTHEIOS_SEV_EMERGENCY
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 17

/** Logs 17 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_EMERGENCY EMERGENCY\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16>
inline int log_EMERGENCY(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_EMERGENCY))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_17(PANTHEIOS_SEV_EMERGENCY
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 18

/** Logs 18 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_EMERGENCY EMERGENCY\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17>
inline int log_EMERGENCY(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_EMERGENCY))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_18(PANTHEIOS_SEV_EMERGENCY
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 19

/** Logs 19 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_EMERGENCY EMERGENCY\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18>
inline int log_EMERGENCY(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_EMERGENCY))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_19(PANTHEIOS_SEV_EMERGENCY
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 20

/** Logs 20 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_EMERGENCY EMERGENCY\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19>
inline int log_EMERGENCY(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_EMERGENCY))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_20(PANTHEIOS_SEV_EMERGENCY
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 21

/** Logs 21 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_EMERGENCY EMERGENCY\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20>
inline int log_EMERGENCY(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_EMERGENCY))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_21(PANTHEIOS_SEV_EMERGENCY
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 22

/** Logs 22 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_EMERGENCY EMERGENCY\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21>
inline int log_EMERGENCY(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_EMERGENCY))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_22(PANTHEIOS_SEV_EMERGENCY
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 23

/** Logs 23 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_EMERGENCY EMERGENCY\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22>
inline int log_EMERGENCY(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_EMERGENCY))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_23(PANTHEIOS_SEV_EMERGENCY
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 24

/** Logs 24 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_EMERGENCY EMERGENCY\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23>
inline int log_EMERGENCY(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_EMERGENCY))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_24(PANTHEIOS_SEV_EMERGENCY
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 25

/** Logs 25 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_EMERGENCY EMERGENCY\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24>
inline int log_EMERGENCY(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_EMERGENCY))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_25(PANTHEIOS_SEV_EMERGENCY
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 26

/** Logs 26 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_EMERGENCY EMERGENCY\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25>
inline int log_EMERGENCY(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_EMERGENCY))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_26(PANTHEIOS_SEV_EMERGENCY
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 27

/** Logs 27 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_EMERGENCY EMERGENCY\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26>
inline int log_EMERGENCY(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_EMERGENCY))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_27(PANTHEIOS_SEV_EMERGENCY
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 28

/** Logs 28 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_EMERGENCY EMERGENCY\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27>
inline int log_EMERGENCY(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_EMERGENCY))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_28(PANTHEIOS_SEV_EMERGENCY
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 29

/** Logs 29 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_EMERGENCY EMERGENCY\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28>
inline int log_EMERGENCY(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27, T28 const& v28)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_EMERGENCY))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_29(PANTHEIOS_SEV_EMERGENCY
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v28));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 30

/** Logs 30 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_EMERGENCY EMERGENCY\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29>
inline int log_EMERGENCY(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27, T28 const& v28, T29 const& v29)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_EMERGENCY))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_30(PANTHEIOS_SEV_EMERGENCY
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v28)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v29));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 31

/** Logs 31 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_EMERGENCY EMERGENCY\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30>
inline int log_EMERGENCY(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27, T28 const& v28, T29 const& v29, T30 const& v30)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_EMERGENCY))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_31(PANTHEIOS_SEV_EMERGENCY
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v28)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v29)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v30));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 32

/** Logs 32 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_EMERGENCY EMERGENCY\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31>
inline int log_EMERGENCY(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27, T28 const& v28, T29 const& v29, T30 const& v30, T31 const& v31)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_EMERGENCY))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_32(PANTHEIOS_SEV_EMERGENCY
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v28)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v29)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v30)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v31));
  }
}

#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 32 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 31 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 30 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 29 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 28 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 27 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 26 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 25 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 24 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 23 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 22 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 21 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 20 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 19 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 18 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 17 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 16 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 15 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 14 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 13 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 12 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 11 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 10 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 9 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 8 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 7 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 6 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 5 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 4 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 3 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 2 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 1 */

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 1

/** Logs 1 object of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ALERT ALERT\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0>
inline int log_ALERT(T0 const& v0)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ALERT))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_1(PANTHEIOS_SEV_ALERT
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 2

/** Logs 2 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ALERT ALERT\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1>
inline int log_ALERT(   T0 const  &v0
              , T1 const& v1)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ALERT))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_2(PANTHEIOS_SEV_ALERT
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 3

/** Logs 3 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ALERT ALERT\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2>
inline int log_ALERT(   T0 const  &v0
              , T1 const& v1, T2 const& v2)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ALERT))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_3(PANTHEIOS_SEV_ALERT
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 4

/** Logs 4 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ALERT ALERT\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3>
inline int log_ALERT(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ALERT))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_4(PANTHEIOS_SEV_ALERT
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 5

/** Logs 5 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ALERT ALERT\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4>
inline int log_ALERT(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ALERT))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_5(PANTHEIOS_SEV_ALERT
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 6

/** Logs 6 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ALERT ALERT\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5>
inline int log_ALERT(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ALERT))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_6(PANTHEIOS_SEV_ALERT
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 7

/** Logs 7 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ALERT ALERT\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline int log_ALERT(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ALERT))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_7(PANTHEIOS_SEV_ALERT
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 8

/** Logs 8 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ALERT ALERT\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline int log_ALERT(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ALERT))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_8(PANTHEIOS_SEV_ALERT
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 9

/** Logs 9 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ALERT ALERT\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline int log_ALERT(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ALERT))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_9(PANTHEIOS_SEV_ALERT
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 10

/** Logs 10 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ALERT ALERT\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
inline int log_ALERT(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ALERT))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_10(PANTHEIOS_SEV_ALERT
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 11

/** Logs 11 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ALERT ALERT\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
inline int log_ALERT(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ALERT))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_11(PANTHEIOS_SEV_ALERT
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 12

/** Logs 12 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ALERT ALERT\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
inline int log_ALERT(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ALERT))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_12(PANTHEIOS_SEV_ALERT
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 13

/** Logs 13 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ALERT ALERT\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
inline int log_ALERT(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ALERT))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_13(PANTHEIOS_SEV_ALERT
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 14

/** Logs 14 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ALERT ALERT\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
inline int log_ALERT(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ALERT))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_14(PANTHEIOS_SEV_ALERT
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 15

/** Logs 15 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ALERT ALERT\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
inline int log_ALERT(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ALERT))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_15(PANTHEIOS_SEV_ALERT
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 16

/** Logs 16 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ALERT ALERT\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
inline int log_ALERT(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ALERT))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_16(PANTHEIOS_SEV_ALERT
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 17

/** Logs 17 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ALERT ALERT\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16>
inline int log_ALERT(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ALERT))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_17(PANTHEIOS_SEV_ALERT
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 18

/** Logs 18 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ALERT ALERT\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17>
inline int log_ALERT(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ALERT))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_18(PANTHEIOS_SEV_ALERT
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 19

/** Logs 19 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ALERT ALERT\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18>
inline int log_ALERT(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ALERT))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_19(PANTHEIOS_SEV_ALERT
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 20

/** Logs 20 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ALERT ALERT\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19>
inline int log_ALERT(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ALERT))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_20(PANTHEIOS_SEV_ALERT
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 21

/** Logs 21 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ALERT ALERT\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20>
inline int log_ALERT(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ALERT))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_21(PANTHEIOS_SEV_ALERT
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 22

/** Logs 22 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ALERT ALERT\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21>
inline int log_ALERT(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ALERT))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_22(PANTHEIOS_SEV_ALERT
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 23

/** Logs 23 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ALERT ALERT\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22>
inline int log_ALERT(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ALERT))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_23(PANTHEIOS_SEV_ALERT
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 24

/** Logs 24 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ALERT ALERT\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23>
inline int log_ALERT(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ALERT))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_24(PANTHEIOS_SEV_ALERT
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 25

/** Logs 25 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ALERT ALERT\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24>
inline int log_ALERT(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ALERT))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_25(PANTHEIOS_SEV_ALERT
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 26

/** Logs 26 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ALERT ALERT\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25>
inline int log_ALERT(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ALERT))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_26(PANTHEIOS_SEV_ALERT
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 27

/** Logs 27 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ALERT ALERT\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26>
inline int log_ALERT(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ALERT))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_27(PANTHEIOS_SEV_ALERT
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 28

/** Logs 28 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ALERT ALERT\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27>
inline int log_ALERT(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ALERT))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_28(PANTHEIOS_SEV_ALERT
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 29

/** Logs 29 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ALERT ALERT\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28>
inline int log_ALERT(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27, T28 const& v28)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ALERT))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_29(PANTHEIOS_SEV_ALERT
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v28));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 30

/** Logs 30 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ALERT ALERT\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29>
inline int log_ALERT(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27, T28 const& v28, T29 const& v29)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ALERT))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_30(PANTHEIOS_SEV_ALERT
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v28)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v29));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 31

/** Logs 31 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ALERT ALERT\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30>
inline int log_ALERT(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27, T28 const& v28, T29 const& v29, T30 const& v30)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ALERT))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_31(PANTHEIOS_SEV_ALERT
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v28)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v29)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v30));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 32

/** Logs 32 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ALERT ALERT\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31>
inline int log_ALERT(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27, T28 const& v28, T29 const& v29, T30 const& v30, T31 const& v31)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ALERT))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_32(PANTHEIOS_SEV_ALERT
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v28)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v29)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v30)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v31));
  }
}

#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 32 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 31 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 30 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 29 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 28 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 27 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 26 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 25 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 24 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 23 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 22 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 21 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 20 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 19 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 18 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 17 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 16 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 15 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 14 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 13 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 12 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 11 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 10 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 9 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 8 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 7 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 6 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 5 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 4 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 3 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 2 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 1 */

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 1

/** Logs 1 object of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_CRITICAL CRITICAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0>
inline int log_CRITICAL(T0 const& v0)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_CRITICAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_1(PANTHEIOS_SEV_CRITICAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 2

/** Logs 2 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_CRITICAL CRITICAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1>
inline int log_CRITICAL(   T0 const  &v0
              , T1 const& v1)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_CRITICAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_2(PANTHEIOS_SEV_CRITICAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 3

/** Logs 3 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_CRITICAL CRITICAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2>
inline int log_CRITICAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_CRITICAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_3(PANTHEIOS_SEV_CRITICAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 4

/** Logs 4 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_CRITICAL CRITICAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3>
inline int log_CRITICAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_CRITICAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_4(PANTHEIOS_SEV_CRITICAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 5

/** Logs 5 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_CRITICAL CRITICAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4>
inline int log_CRITICAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_CRITICAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_5(PANTHEIOS_SEV_CRITICAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 6

/** Logs 6 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_CRITICAL CRITICAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5>
inline int log_CRITICAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_CRITICAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_6(PANTHEIOS_SEV_CRITICAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 7

/** Logs 7 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_CRITICAL CRITICAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline int log_CRITICAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_CRITICAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_7(PANTHEIOS_SEV_CRITICAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 8

/** Logs 8 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_CRITICAL CRITICAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline int log_CRITICAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_CRITICAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_8(PANTHEIOS_SEV_CRITICAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 9

/** Logs 9 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_CRITICAL CRITICAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline int log_CRITICAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_CRITICAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_9(PANTHEIOS_SEV_CRITICAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 10

/** Logs 10 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_CRITICAL CRITICAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
inline int log_CRITICAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_CRITICAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_10(PANTHEIOS_SEV_CRITICAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 11

/** Logs 11 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_CRITICAL CRITICAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
inline int log_CRITICAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_CRITICAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_11(PANTHEIOS_SEV_CRITICAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 12

/** Logs 12 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_CRITICAL CRITICAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
inline int log_CRITICAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_CRITICAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_12(PANTHEIOS_SEV_CRITICAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 13

/** Logs 13 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_CRITICAL CRITICAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
inline int log_CRITICAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_CRITICAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_13(PANTHEIOS_SEV_CRITICAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 14

/** Logs 14 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_CRITICAL CRITICAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
inline int log_CRITICAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_CRITICAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_14(PANTHEIOS_SEV_CRITICAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 15

/** Logs 15 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_CRITICAL CRITICAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
inline int log_CRITICAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_CRITICAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_15(PANTHEIOS_SEV_CRITICAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 16

/** Logs 16 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_CRITICAL CRITICAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
inline int log_CRITICAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_CRITICAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_16(PANTHEIOS_SEV_CRITICAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 17

/** Logs 17 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_CRITICAL CRITICAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16>
inline int log_CRITICAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_CRITICAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_17(PANTHEIOS_SEV_CRITICAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 18

/** Logs 18 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_CRITICAL CRITICAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17>
inline int log_CRITICAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_CRITICAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_18(PANTHEIOS_SEV_CRITICAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 19

/** Logs 19 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_CRITICAL CRITICAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18>
inline int log_CRITICAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_CRITICAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_19(PANTHEIOS_SEV_CRITICAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 20

/** Logs 20 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_CRITICAL CRITICAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19>
inline int log_CRITICAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_CRITICAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_20(PANTHEIOS_SEV_CRITICAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 21

/** Logs 21 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_CRITICAL CRITICAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20>
inline int log_CRITICAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_CRITICAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_21(PANTHEIOS_SEV_CRITICAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 22

/** Logs 22 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_CRITICAL CRITICAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21>
inline int log_CRITICAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_CRITICAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_22(PANTHEIOS_SEV_CRITICAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 23

/** Logs 23 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_CRITICAL CRITICAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22>
inline int log_CRITICAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_CRITICAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_23(PANTHEIOS_SEV_CRITICAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 24

/** Logs 24 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_CRITICAL CRITICAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23>
inline int log_CRITICAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_CRITICAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_24(PANTHEIOS_SEV_CRITICAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 25

/** Logs 25 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_CRITICAL CRITICAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24>
inline int log_CRITICAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_CRITICAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_25(PANTHEIOS_SEV_CRITICAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 26

/** Logs 26 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_CRITICAL CRITICAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25>
inline int log_CRITICAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_CRITICAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_26(PANTHEIOS_SEV_CRITICAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 27

/** Logs 27 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_CRITICAL CRITICAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26>
inline int log_CRITICAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_CRITICAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_27(PANTHEIOS_SEV_CRITICAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 28

/** Logs 28 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_CRITICAL CRITICAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27>
inline int log_CRITICAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_CRITICAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_28(PANTHEIOS_SEV_CRITICAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 29

/** Logs 29 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_CRITICAL CRITICAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28>
inline int log_CRITICAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27, T28 const& v28)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_CRITICAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_29(PANTHEIOS_SEV_CRITICAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v28));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 30

/** Logs 30 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_CRITICAL CRITICAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29>
inline int log_CRITICAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27, T28 const& v28, T29 const& v29)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_CRITICAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_30(PANTHEIOS_SEV_CRITICAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v28)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v29));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 31

/** Logs 31 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_CRITICAL CRITICAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30>
inline int log_CRITICAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27, T28 const& v28, T29 const& v29, T30 const& v30)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_CRITICAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_31(PANTHEIOS_SEV_CRITICAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v28)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v29)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v30));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 32

/** Logs 32 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_CRITICAL CRITICAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31>
inline int log_CRITICAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27, T28 const& v28, T29 const& v29, T30 const& v30, T31 const& v31)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_CRITICAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_32(PANTHEIOS_SEV_CRITICAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v28)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v29)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v30)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v31));
  }
}

#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 32 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 31 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 30 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 29 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 28 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 27 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 26 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 25 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 24 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 23 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 22 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 21 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 20 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 19 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 18 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 17 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 16 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 15 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 14 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 13 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 12 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 11 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 10 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 9 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 8 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 7 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 6 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 5 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 4 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 3 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 2 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 1 */

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 1

/** Logs 1 object of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ERROR ERROR\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0>
inline int log_ERROR(T0 const& v0)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ERROR))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_1(PANTHEIOS_SEV_ERROR
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 2

/** Logs 2 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ERROR ERROR\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1>
inline int log_ERROR(   T0 const  &v0
              , T1 const& v1)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ERROR))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_2(PANTHEIOS_SEV_ERROR
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 3

/** Logs 3 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ERROR ERROR\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2>
inline int log_ERROR(   T0 const  &v0
              , T1 const& v1, T2 const& v2)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ERROR))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_3(PANTHEIOS_SEV_ERROR
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 4

/** Logs 4 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ERROR ERROR\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3>
inline int log_ERROR(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ERROR))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_4(PANTHEIOS_SEV_ERROR
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 5

/** Logs 5 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ERROR ERROR\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4>
inline int log_ERROR(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ERROR))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_5(PANTHEIOS_SEV_ERROR
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 6

/** Logs 6 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ERROR ERROR\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5>
inline int log_ERROR(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ERROR))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_6(PANTHEIOS_SEV_ERROR
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 7

/** Logs 7 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ERROR ERROR\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline int log_ERROR(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ERROR))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_7(PANTHEIOS_SEV_ERROR
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 8

/** Logs 8 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ERROR ERROR\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline int log_ERROR(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ERROR))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_8(PANTHEIOS_SEV_ERROR
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 9

/** Logs 9 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ERROR ERROR\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline int log_ERROR(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ERROR))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_9(PANTHEIOS_SEV_ERROR
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 10

/** Logs 10 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ERROR ERROR\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
inline int log_ERROR(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ERROR))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_10(PANTHEIOS_SEV_ERROR
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 11

/** Logs 11 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ERROR ERROR\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
inline int log_ERROR(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ERROR))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_11(PANTHEIOS_SEV_ERROR
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 12

/** Logs 12 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ERROR ERROR\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
inline int log_ERROR(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ERROR))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_12(PANTHEIOS_SEV_ERROR
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 13

/** Logs 13 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ERROR ERROR\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
inline int log_ERROR(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ERROR))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_13(PANTHEIOS_SEV_ERROR
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 14

/** Logs 14 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ERROR ERROR\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
inline int log_ERROR(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ERROR))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_14(PANTHEIOS_SEV_ERROR
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 15

/** Logs 15 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ERROR ERROR\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
inline int log_ERROR(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ERROR))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_15(PANTHEIOS_SEV_ERROR
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 16

/** Logs 16 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ERROR ERROR\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
inline int log_ERROR(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ERROR))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_16(PANTHEIOS_SEV_ERROR
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 17

/** Logs 17 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ERROR ERROR\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16>
inline int log_ERROR(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ERROR))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_17(PANTHEIOS_SEV_ERROR
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 18

/** Logs 18 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ERROR ERROR\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17>
inline int log_ERROR(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ERROR))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_18(PANTHEIOS_SEV_ERROR
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 19

/** Logs 19 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ERROR ERROR\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18>
inline int log_ERROR(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ERROR))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_19(PANTHEIOS_SEV_ERROR
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 20

/** Logs 20 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ERROR ERROR\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19>
inline int log_ERROR(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ERROR))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_20(PANTHEIOS_SEV_ERROR
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 21

/** Logs 21 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ERROR ERROR\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20>
inline int log_ERROR(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ERROR))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_21(PANTHEIOS_SEV_ERROR
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 22

/** Logs 22 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ERROR ERROR\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21>
inline int log_ERROR(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ERROR))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_22(PANTHEIOS_SEV_ERROR
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 23

/** Logs 23 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ERROR ERROR\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22>
inline int log_ERROR(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ERROR))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_23(PANTHEIOS_SEV_ERROR
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 24

/** Logs 24 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ERROR ERROR\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23>
inline int log_ERROR(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ERROR))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_24(PANTHEIOS_SEV_ERROR
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 25

/** Logs 25 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ERROR ERROR\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24>
inline int log_ERROR(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ERROR))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_25(PANTHEIOS_SEV_ERROR
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 26

/** Logs 26 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ERROR ERROR\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25>
inline int log_ERROR(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ERROR))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_26(PANTHEIOS_SEV_ERROR
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 27

/** Logs 27 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ERROR ERROR\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26>
inline int log_ERROR(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ERROR))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_27(PANTHEIOS_SEV_ERROR
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 28

/** Logs 28 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ERROR ERROR\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27>
inline int log_ERROR(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ERROR))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_28(PANTHEIOS_SEV_ERROR
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 29

/** Logs 29 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ERROR ERROR\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28>
inline int log_ERROR(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27, T28 const& v28)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ERROR))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_29(PANTHEIOS_SEV_ERROR
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v28));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 30

/** Logs 30 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ERROR ERROR\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29>
inline int log_ERROR(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27, T28 const& v28, T29 const& v29)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ERROR))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_30(PANTHEIOS_SEV_ERROR
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v28)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v29));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 31

/** Logs 31 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ERROR ERROR\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30>
inline int log_ERROR(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27, T28 const& v28, T29 const& v29, T30 const& v30)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ERROR))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_31(PANTHEIOS_SEV_ERROR
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v28)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v29)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v30));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 32

/** Logs 32 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_ERROR ERROR\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31>
inline int log_ERROR(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27, T28 const& v28, T29 const& v29, T30 const& v30, T31 const& v31)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_ERROR))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_32(PANTHEIOS_SEV_ERROR
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v28)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v29)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v30)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v31));
  }
}

#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 32 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 31 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 30 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 29 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 28 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 27 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 26 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 25 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 24 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 23 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 22 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 21 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 20 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 19 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 18 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 17 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 16 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 15 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 14 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 13 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 12 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 11 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 10 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 9 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 8 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 7 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 6 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 5 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 4 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 3 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 2 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 1 */

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 1

/** Logs 1 object of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_WARNING WARNING\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0>
inline int log_WARNING(T0 const& v0)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_WARNING))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_1(PANTHEIOS_SEV_WARNING
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 2

/** Logs 2 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_WARNING WARNING\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1>
inline int log_WARNING(   T0 const  &v0
              , T1 const& v1)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_WARNING))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_2(PANTHEIOS_SEV_WARNING
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 3

/** Logs 3 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_WARNING WARNING\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2>
inline int log_WARNING(   T0 const  &v0
              , T1 const& v1, T2 const& v2)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_WARNING))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_3(PANTHEIOS_SEV_WARNING
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 4

/** Logs 4 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_WARNING WARNING\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3>
inline int log_WARNING(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_WARNING))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_4(PANTHEIOS_SEV_WARNING
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 5

/** Logs 5 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_WARNING WARNING\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4>
inline int log_WARNING(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_WARNING))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_5(PANTHEIOS_SEV_WARNING
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 6

/** Logs 6 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_WARNING WARNING\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5>
inline int log_WARNING(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_WARNING))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_6(PANTHEIOS_SEV_WARNING
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 7

/** Logs 7 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_WARNING WARNING\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline int log_WARNING(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_WARNING))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_7(PANTHEIOS_SEV_WARNING
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 8

/** Logs 8 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_WARNING WARNING\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline int log_WARNING(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_WARNING))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_8(PANTHEIOS_SEV_WARNING
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 9

/** Logs 9 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_WARNING WARNING\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline int log_WARNING(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_WARNING))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_9(PANTHEIOS_SEV_WARNING
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 10

/** Logs 10 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_WARNING WARNING\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
inline int log_WARNING(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_WARNING))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_10(PANTHEIOS_SEV_WARNING
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 11

/** Logs 11 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_WARNING WARNING\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
inline int log_WARNING(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_WARNING))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_11(PANTHEIOS_SEV_WARNING
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 12

/** Logs 12 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_WARNING WARNING\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
inline int log_WARNING(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_WARNING))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_12(PANTHEIOS_SEV_WARNING
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 13

/** Logs 13 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_WARNING WARNING\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
inline int log_WARNING(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_WARNING))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_13(PANTHEIOS_SEV_WARNING
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 14

/** Logs 14 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_WARNING WARNING\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
inline int log_WARNING(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_WARNING))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_14(PANTHEIOS_SEV_WARNING
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 15

/** Logs 15 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_WARNING WARNING\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
inline int log_WARNING(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_WARNING))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_15(PANTHEIOS_SEV_WARNING
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 16

/** Logs 16 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_WARNING WARNING\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
inline int log_WARNING(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_WARNING))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_16(PANTHEIOS_SEV_WARNING
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 17

/** Logs 17 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_WARNING WARNING\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16>
inline int log_WARNING(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_WARNING))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_17(PANTHEIOS_SEV_WARNING
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 18

/** Logs 18 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_WARNING WARNING\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17>
inline int log_WARNING(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_WARNING))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_18(PANTHEIOS_SEV_WARNING
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 19

/** Logs 19 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_WARNING WARNING\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18>
inline int log_WARNING(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_WARNING))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_19(PANTHEIOS_SEV_WARNING
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 20

/** Logs 20 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_WARNING WARNING\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19>
inline int log_WARNING(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_WARNING))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_20(PANTHEIOS_SEV_WARNING
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 21

/** Logs 21 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_WARNING WARNING\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20>
inline int log_WARNING(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_WARNING))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_21(PANTHEIOS_SEV_WARNING
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 22

/** Logs 22 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_WARNING WARNING\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21>
inline int log_WARNING(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_WARNING))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_22(PANTHEIOS_SEV_WARNING
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 23

/** Logs 23 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_WARNING WARNING\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22>
inline int log_WARNING(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_WARNING))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_23(PANTHEIOS_SEV_WARNING
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 24

/** Logs 24 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_WARNING WARNING\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23>
inline int log_WARNING(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_WARNING))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_24(PANTHEIOS_SEV_WARNING
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 25

/** Logs 25 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_WARNING WARNING\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24>
inline int log_WARNING(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_WARNING))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_25(PANTHEIOS_SEV_WARNING
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 26

/** Logs 26 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_WARNING WARNING\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25>
inline int log_WARNING(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_WARNING))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_26(PANTHEIOS_SEV_WARNING
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 27

/** Logs 27 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_WARNING WARNING\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26>
inline int log_WARNING(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_WARNING))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_27(PANTHEIOS_SEV_WARNING
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 28

/** Logs 28 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_WARNING WARNING\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27>
inline int log_WARNING(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_WARNING))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_28(PANTHEIOS_SEV_WARNING
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 29

/** Logs 29 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_WARNING WARNING\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28>
inline int log_WARNING(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27, T28 const& v28)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_WARNING))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_29(PANTHEIOS_SEV_WARNING
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v28));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 30

/** Logs 30 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_WARNING WARNING\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29>
inline int log_WARNING(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27, T28 const& v28, T29 const& v29)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_WARNING))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_30(PANTHEIOS_SEV_WARNING
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v28)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v29));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 31

/** Logs 31 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_WARNING WARNING\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30>
inline int log_WARNING(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27, T28 const& v28, T29 const& v29, T30 const& v30)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_WARNING))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_31(PANTHEIOS_SEV_WARNING
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v28)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v29)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v30));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 32

/** Logs 32 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_WARNING WARNING\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31>
inline int log_WARNING(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27, T28 const& v28, T29 const& v29, T30 const& v30, T31 const& v31)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_WARNING))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_32(PANTHEIOS_SEV_WARNING
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v28)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v29)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v30)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v31));
  }
}

#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 32 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 31 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 30 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 29 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 28 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 27 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 26 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 25 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 24 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 23 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 22 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 21 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 20 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 19 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 18 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 17 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 16 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 15 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 14 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 13 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 12 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 11 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 10 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 9 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 8 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 7 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 6 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 5 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 4 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 3 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 2 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 1 */

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 1

/** Logs 1 object of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_NOTICE NOTICE\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0>
inline int log_NOTICE(T0 const& v0)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_NOTICE))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_1(PANTHEIOS_SEV_NOTICE
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 2

/** Logs 2 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_NOTICE NOTICE\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1>
inline int log_NOTICE(   T0 const  &v0
              , T1 const& v1)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_NOTICE))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_2(PANTHEIOS_SEV_NOTICE
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 3

/** Logs 3 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_NOTICE NOTICE\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2>
inline int log_NOTICE(   T0 const  &v0
              , T1 const& v1, T2 const& v2)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_NOTICE))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_3(PANTHEIOS_SEV_NOTICE
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 4

/** Logs 4 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_NOTICE NOTICE\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3>
inline int log_NOTICE(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_NOTICE))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_4(PANTHEIOS_SEV_NOTICE
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 5

/** Logs 5 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_NOTICE NOTICE\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4>
inline int log_NOTICE(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_NOTICE))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_5(PANTHEIOS_SEV_NOTICE
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 6

/** Logs 6 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_NOTICE NOTICE\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5>
inline int log_NOTICE(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_NOTICE))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_6(PANTHEIOS_SEV_NOTICE
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 7

/** Logs 7 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_NOTICE NOTICE\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline int log_NOTICE(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_NOTICE))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_7(PANTHEIOS_SEV_NOTICE
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 8

/** Logs 8 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_NOTICE NOTICE\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline int log_NOTICE(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_NOTICE))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_8(PANTHEIOS_SEV_NOTICE
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 9

/** Logs 9 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_NOTICE NOTICE\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline int log_NOTICE(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_NOTICE))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_9(PANTHEIOS_SEV_NOTICE
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 10

/** Logs 10 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_NOTICE NOTICE\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
inline int log_NOTICE(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_NOTICE))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_10(PANTHEIOS_SEV_NOTICE
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 11

/** Logs 11 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_NOTICE NOTICE\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
inline int log_NOTICE(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_NOTICE))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_11(PANTHEIOS_SEV_NOTICE
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 12

/** Logs 12 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_NOTICE NOTICE\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
inline int log_NOTICE(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_NOTICE))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_12(PANTHEIOS_SEV_NOTICE
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 13

/** Logs 13 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_NOTICE NOTICE\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
inline int log_NOTICE(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_NOTICE))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_13(PANTHEIOS_SEV_NOTICE
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 14

/** Logs 14 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_NOTICE NOTICE\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
inline int log_NOTICE(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_NOTICE))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_14(PANTHEIOS_SEV_NOTICE
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 15

/** Logs 15 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_NOTICE NOTICE\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
inline int log_NOTICE(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_NOTICE))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_15(PANTHEIOS_SEV_NOTICE
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 16

/** Logs 16 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_NOTICE NOTICE\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
inline int log_NOTICE(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_NOTICE))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_16(PANTHEIOS_SEV_NOTICE
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 17

/** Logs 17 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_NOTICE NOTICE\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16>
inline int log_NOTICE(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_NOTICE))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_17(PANTHEIOS_SEV_NOTICE
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 18

/** Logs 18 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_NOTICE NOTICE\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17>
inline int log_NOTICE(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_NOTICE))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_18(PANTHEIOS_SEV_NOTICE
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 19

/** Logs 19 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_NOTICE NOTICE\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18>
inline int log_NOTICE(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_NOTICE))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_19(PANTHEIOS_SEV_NOTICE
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 20

/** Logs 20 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_NOTICE NOTICE\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19>
inline int log_NOTICE(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_NOTICE))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_20(PANTHEIOS_SEV_NOTICE
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 21

/** Logs 21 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_NOTICE NOTICE\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20>
inline int log_NOTICE(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_NOTICE))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_21(PANTHEIOS_SEV_NOTICE
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 22

/** Logs 22 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_NOTICE NOTICE\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21>
inline int log_NOTICE(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_NOTICE))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_22(PANTHEIOS_SEV_NOTICE
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 23

/** Logs 23 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_NOTICE NOTICE\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22>
inline int log_NOTICE(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_NOTICE))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_23(PANTHEIOS_SEV_NOTICE
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 24

/** Logs 24 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_NOTICE NOTICE\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23>
inline int log_NOTICE(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_NOTICE))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_24(PANTHEIOS_SEV_NOTICE
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 25

/** Logs 25 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_NOTICE NOTICE\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24>
inline int log_NOTICE(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_NOTICE))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_25(PANTHEIOS_SEV_NOTICE
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 26

/** Logs 26 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_NOTICE NOTICE\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25>
inline int log_NOTICE(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_NOTICE))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_26(PANTHEIOS_SEV_NOTICE
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 27

/** Logs 27 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_NOTICE NOTICE\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26>
inline int log_NOTICE(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_NOTICE))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_27(PANTHEIOS_SEV_NOTICE
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 28

/** Logs 28 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_NOTICE NOTICE\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27>
inline int log_NOTICE(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_NOTICE))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_28(PANTHEIOS_SEV_NOTICE
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 29

/** Logs 29 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_NOTICE NOTICE\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28>
inline int log_NOTICE(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27, T28 const& v28)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_NOTICE))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_29(PANTHEIOS_SEV_NOTICE
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v28));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 30

/** Logs 30 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_NOTICE NOTICE\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29>
inline int log_NOTICE(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27, T28 const& v28, T29 const& v29)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_NOTICE))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_30(PANTHEIOS_SEV_NOTICE
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v28)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v29));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 31

/** Logs 31 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_NOTICE NOTICE\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30>
inline int log_NOTICE(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27, T28 const& v28, T29 const& v29, T30 const& v30)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_NOTICE))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_31(PANTHEIOS_SEV_NOTICE
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v28)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v29)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v30));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 32

/** Logs 32 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_NOTICE NOTICE\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31>
inline int log_NOTICE(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27, T28 const& v28, T29 const& v29, T30 const& v30, T31 const& v31)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_NOTICE))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_32(PANTHEIOS_SEV_NOTICE
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v28)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v29)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v30)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v31));
  }
}

#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 32 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 31 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 30 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 29 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 28 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 27 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 26 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 25 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 24 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 23 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 22 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 21 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 20 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 19 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 18 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 17 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 16 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 15 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 14 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 13 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 12 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 11 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 10 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 9 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 8 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 7 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 6 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 5 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 4 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 3 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 2 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 1 */

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 1

/** Logs 1 object of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_INFORMATIONAL INFORMATIONAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0>
inline int log_INFORMATIONAL(T0 const& v0)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_INFORMATIONAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_1(PANTHEIOS_SEV_INFORMATIONAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 2

/** Logs 2 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_INFORMATIONAL INFORMATIONAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1>
inline int log_INFORMATIONAL(   T0 const  &v0
              , T1 const& v1)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_INFORMATIONAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_2(PANTHEIOS_SEV_INFORMATIONAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 3

/** Logs 3 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_INFORMATIONAL INFORMATIONAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2>
inline int log_INFORMATIONAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_INFORMATIONAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_3(PANTHEIOS_SEV_INFORMATIONAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 4

/** Logs 4 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_INFORMATIONAL INFORMATIONAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3>
inline int log_INFORMATIONAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_INFORMATIONAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_4(PANTHEIOS_SEV_INFORMATIONAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 5

/** Logs 5 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_INFORMATIONAL INFORMATIONAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4>
inline int log_INFORMATIONAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_INFORMATIONAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_5(PANTHEIOS_SEV_INFORMATIONAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 6

/** Logs 6 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_INFORMATIONAL INFORMATIONAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5>
inline int log_INFORMATIONAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_INFORMATIONAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_6(PANTHEIOS_SEV_INFORMATIONAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 7

/** Logs 7 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_INFORMATIONAL INFORMATIONAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline int log_INFORMATIONAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_INFORMATIONAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_7(PANTHEIOS_SEV_INFORMATIONAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 8

/** Logs 8 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_INFORMATIONAL INFORMATIONAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline int log_INFORMATIONAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_INFORMATIONAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_8(PANTHEIOS_SEV_INFORMATIONAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 9

/** Logs 9 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_INFORMATIONAL INFORMATIONAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline int log_INFORMATIONAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_INFORMATIONAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_9(PANTHEIOS_SEV_INFORMATIONAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 10

/** Logs 10 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_INFORMATIONAL INFORMATIONAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
inline int log_INFORMATIONAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_INFORMATIONAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_10(PANTHEIOS_SEV_INFORMATIONAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 11

/** Logs 11 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_INFORMATIONAL INFORMATIONAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
inline int log_INFORMATIONAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_INFORMATIONAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_11(PANTHEIOS_SEV_INFORMATIONAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 12

/** Logs 12 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_INFORMATIONAL INFORMATIONAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
inline int log_INFORMATIONAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_INFORMATIONAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_12(PANTHEIOS_SEV_INFORMATIONAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 13

/** Logs 13 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_INFORMATIONAL INFORMATIONAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
inline int log_INFORMATIONAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_INFORMATIONAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_13(PANTHEIOS_SEV_INFORMATIONAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 14

/** Logs 14 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_INFORMATIONAL INFORMATIONAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
inline int log_INFORMATIONAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_INFORMATIONAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_14(PANTHEIOS_SEV_INFORMATIONAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 15

/** Logs 15 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_INFORMATIONAL INFORMATIONAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
inline int log_INFORMATIONAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_INFORMATIONAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_15(PANTHEIOS_SEV_INFORMATIONAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 16

/** Logs 16 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_INFORMATIONAL INFORMATIONAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
inline int log_INFORMATIONAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_INFORMATIONAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_16(PANTHEIOS_SEV_INFORMATIONAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 17

/** Logs 17 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_INFORMATIONAL INFORMATIONAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16>
inline int log_INFORMATIONAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_INFORMATIONAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_17(PANTHEIOS_SEV_INFORMATIONAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 18

/** Logs 18 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_INFORMATIONAL INFORMATIONAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17>
inline int log_INFORMATIONAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_INFORMATIONAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_18(PANTHEIOS_SEV_INFORMATIONAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 19

/** Logs 19 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_INFORMATIONAL INFORMATIONAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18>
inline int log_INFORMATIONAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_INFORMATIONAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_19(PANTHEIOS_SEV_INFORMATIONAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 20

/** Logs 20 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_INFORMATIONAL INFORMATIONAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19>
inline int log_INFORMATIONAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_INFORMATIONAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_20(PANTHEIOS_SEV_INFORMATIONAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 21

/** Logs 21 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_INFORMATIONAL INFORMATIONAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20>
inline int log_INFORMATIONAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_INFORMATIONAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_21(PANTHEIOS_SEV_INFORMATIONAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 22

/** Logs 22 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_INFORMATIONAL INFORMATIONAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21>
inline int log_INFORMATIONAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_INFORMATIONAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_22(PANTHEIOS_SEV_INFORMATIONAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 23

/** Logs 23 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_INFORMATIONAL INFORMATIONAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22>
inline int log_INFORMATIONAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_INFORMATIONAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_23(PANTHEIOS_SEV_INFORMATIONAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 24

/** Logs 24 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_INFORMATIONAL INFORMATIONAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23>
inline int log_INFORMATIONAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_INFORMATIONAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_24(PANTHEIOS_SEV_INFORMATIONAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 25

/** Logs 25 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_INFORMATIONAL INFORMATIONAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24>
inline int log_INFORMATIONAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_INFORMATIONAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_25(PANTHEIOS_SEV_INFORMATIONAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 26

/** Logs 26 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_INFORMATIONAL INFORMATIONAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25>
inline int log_INFORMATIONAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_INFORMATIONAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_26(PANTHEIOS_SEV_INFORMATIONAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 27

/** Logs 27 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_INFORMATIONAL INFORMATIONAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26>
inline int log_INFORMATIONAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_INFORMATIONAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_27(PANTHEIOS_SEV_INFORMATIONAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 28

/** Logs 28 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_INFORMATIONAL INFORMATIONAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27>
inline int log_INFORMATIONAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_INFORMATIONAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_28(PANTHEIOS_SEV_INFORMATIONAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 29

/** Logs 29 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_INFORMATIONAL INFORMATIONAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28>
inline int log_INFORMATIONAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27, T28 const& v28)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_INFORMATIONAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_29(PANTHEIOS_SEV_INFORMATIONAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v28));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 30

/** Logs 30 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_INFORMATIONAL INFORMATIONAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29>
inline int log_INFORMATIONAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27, T28 const& v28, T29 const& v29)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_INFORMATIONAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_30(PANTHEIOS_SEV_INFORMATIONAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v28)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v29));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 31

/** Logs 31 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_INFORMATIONAL INFORMATIONAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30>
inline int log_INFORMATIONAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27, T28 const& v28, T29 const& v29, T30 const& v30)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_INFORMATIONAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_31(PANTHEIOS_SEV_INFORMATIONAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v28)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v29)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v30));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 32

/** Logs 32 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_INFORMATIONAL INFORMATIONAL\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31>
inline int log_INFORMATIONAL(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27, T28 const& v28, T29 const& v29, T30 const& v30, T31 const& v31)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_INFORMATIONAL))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_32(PANTHEIOS_SEV_INFORMATIONAL
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v28)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v29)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v30)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v31));
  }
}

#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 32 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 31 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 30 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 29 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 28 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 27 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 26 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 25 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 24 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 23 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 22 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 21 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 20 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 19 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 18 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 17 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 16 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 15 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 14 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 13 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 12 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 11 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 10 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 9 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 8 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 7 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 6 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 5 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 4 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 3 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 2 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 1 */

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 1

/** Logs 1 object of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_DEBUG DEBUG\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0>
inline int log_DEBUG(T0 const& v0)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_DEBUG))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_1(PANTHEIOS_SEV_DEBUG
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 2

/** Logs 2 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_DEBUG DEBUG\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1>
inline int log_DEBUG(   T0 const  &v0
              , T1 const& v1)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_DEBUG))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_2(PANTHEIOS_SEV_DEBUG
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 3

/** Logs 3 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_DEBUG DEBUG\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2>
inline int log_DEBUG(   T0 const  &v0
              , T1 const& v1, T2 const& v2)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_DEBUG))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_3(PANTHEIOS_SEV_DEBUG
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 4

/** Logs 4 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_DEBUG DEBUG\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3>
inline int log_DEBUG(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_DEBUG))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_4(PANTHEIOS_SEV_DEBUG
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 5

/** Logs 5 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_DEBUG DEBUG\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4>
inline int log_DEBUG(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_DEBUG))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_5(PANTHEIOS_SEV_DEBUG
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 6

/** Logs 6 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_DEBUG DEBUG\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5>
inline int log_DEBUG(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_DEBUG))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_6(PANTHEIOS_SEV_DEBUG
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 7

/** Logs 7 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_DEBUG DEBUG\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline int log_DEBUG(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_DEBUG))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_7(PANTHEIOS_SEV_DEBUG
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 8

/** Logs 8 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_DEBUG DEBUG\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline int log_DEBUG(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_DEBUG))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_8(PANTHEIOS_SEV_DEBUG
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 9

/** Logs 9 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_DEBUG DEBUG\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline int log_DEBUG(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_DEBUG))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_9(PANTHEIOS_SEV_DEBUG
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 10

/** Logs 10 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_DEBUG DEBUG\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
inline int log_DEBUG(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_DEBUG))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_10(PANTHEIOS_SEV_DEBUG
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 11

/** Logs 11 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_DEBUG DEBUG\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
inline int log_DEBUG(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_DEBUG))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_11(PANTHEIOS_SEV_DEBUG
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 12

/** Logs 12 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_DEBUG DEBUG\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
inline int log_DEBUG(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_DEBUG))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_12(PANTHEIOS_SEV_DEBUG
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 13

/** Logs 13 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_DEBUG DEBUG\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
inline int log_DEBUG(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_DEBUG))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_13(PANTHEIOS_SEV_DEBUG
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 14

/** Logs 14 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_DEBUG DEBUG\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
inline int log_DEBUG(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_DEBUG))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_14(PANTHEIOS_SEV_DEBUG
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 15

/** Logs 15 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_DEBUG DEBUG\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
inline int log_DEBUG(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_DEBUG))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_15(PANTHEIOS_SEV_DEBUG
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 16

/** Logs 16 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_DEBUG DEBUG\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
inline int log_DEBUG(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_DEBUG))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_16(PANTHEIOS_SEV_DEBUG
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 17

/** Logs 17 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_DEBUG DEBUG\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16>
inline int log_DEBUG(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_DEBUG))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_17(PANTHEIOS_SEV_DEBUG
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 18

/** Logs 18 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_DEBUG DEBUG\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17>
inline int log_DEBUG(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_DEBUG))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_18(PANTHEIOS_SEV_DEBUG
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 19

/** Logs 19 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_DEBUG DEBUG\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18>
inline int log_DEBUG(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_DEBUG))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_19(PANTHEIOS_SEV_DEBUG
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 20

/** Logs 20 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_DEBUG DEBUG\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19>
inline int log_DEBUG(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_DEBUG))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_20(PANTHEIOS_SEV_DEBUG
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 21

/** Logs 21 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_DEBUG DEBUG\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20>
inline int log_DEBUG(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_DEBUG))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_21(PANTHEIOS_SEV_DEBUG
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 22

/** Logs 22 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_DEBUG DEBUG\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21>
inline int log_DEBUG(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_DEBUG))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_22(PANTHEIOS_SEV_DEBUG
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 23

/** Logs 23 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_DEBUG DEBUG\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22>
inline int log_DEBUG(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_DEBUG))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_23(PANTHEIOS_SEV_DEBUG
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 24

/** Logs 24 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_DEBUG DEBUG\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23>
inline int log_DEBUG(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_DEBUG))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_24(PANTHEIOS_SEV_DEBUG
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 25

/** Logs 25 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_DEBUG DEBUG\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24>
inline int log_DEBUG(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_DEBUG))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_25(PANTHEIOS_SEV_DEBUG
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 26

/** Logs 26 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_DEBUG DEBUG\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25>
inline int log_DEBUG(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_DEBUG))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_26(PANTHEIOS_SEV_DEBUG
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 27

/** Logs 27 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_DEBUG DEBUG\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26>
inline int log_DEBUG(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_DEBUG))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_27(PANTHEIOS_SEV_DEBUG
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 28

/** Logs 28 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_DEBUG DEBUG\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27>
inline int log_DEBUG(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_DEBUG))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_28(PANTHEIOS_SEV_DEBUG
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 29

/** Logs 29 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_DEBUG DEBUG\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28>
inline int log_DEBUG(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27, T28 const& v28)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_DEBUG))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_29(PANTHEIOS_SEV_DEBUG
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v28));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 30

/** Logs 30 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_DEBUG DEBUG\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29>
inline int log_DEBUG(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27, T28 const& v28, T29 const& v29)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_DEBUG))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_30(PANTHEIOS_SEV_DEBUG
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v28)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v29));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 31

/** Logs 31 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_DEBUG DEBUG\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30>
inline int log_DEBUG(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27, T28 const& v28, T29 const& v29, T30 const& v30)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_DEBUG))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_31(PANTHEIOS_SEV_DEBUG
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v28)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v29)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v30));
  }
}

#if PANTHEIOS_APPL_PARAMS_LIMIT >= 32

/** Logs 32 objects of arbitrary type, subject to severity-level filtering, at severity level \link pantheios::SEV_DEBUG DEBUG\endlink
 * \ingroup group__application_layer_interface__generated
 * \note The \c c_str_data_a() and \c c_str_len_a() string access shims are applied to each parameter, to form a string slice
 */
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31>
inline int log_DEBUG(   T0 const  &v0
              , T1 const& v1, T2 const& v2, T3 const& v3, T4 const& v4, T5 const& v5, T6 const& v6, T7 const& v7, T8 const& v8, T9 const& v9, T10 const& v10, T11 const& v11, T12 const& v12, T13 const& v13, T14 const& v14, T15 const& v15, T16 const& v16, T17 const& v17, T18 const& v18, T19 const& v19, T20 const& v20, T21 const& v21, T22 const& v22, T23 const& v23, T24 const& v24, T25 const& v25, T26 const& v26, T27 const& v27, T28 const& v28, T29 const& v29, T30 const& v30, T31 const& v31)
{
  if(!pantheios_isSeverityLogged(PANTHEIOS_SEV_DEBUG))
  {
    return 0;
  }
  else
  {
    PANTHEIOS_DECLARE_SHIM_PAIR_();

    return internal::log_dispatch_32(PANTHEIOS_SEV_DEBUG
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v0)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v1)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v2)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v3)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v4)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v5)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v6)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v7)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v8)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v9)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v10)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v11)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v12)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v13)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v14)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v15)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v16)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v17)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v18)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v19)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v20)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v21)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v22)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v23)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v24)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v25)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v26)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v27)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v28)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v29)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v30)
      , PANTHEIOS_INVOKE_SHIM_PAIR_(v31));
  }
}

#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 32 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 31 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 30 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 29 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 28 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 27 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 26 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 25 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 24 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 23 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 22 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 21 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 20 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 19 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 18 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 17 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 16 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 15 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 14 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 13 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 12 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 11 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 10 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 9 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 8 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 7 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 6 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 5 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 4 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 3 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 2 */
#endif /* PANTHEIOS_APPL_PARAMS_LIMIT >= 1 */
