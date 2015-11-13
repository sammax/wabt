#ifndef WASM_TOKENS_H_
#define WASM_TOKENS_H_

#define WASM_TOKEN_TYPES(V)            \
  V(WASM_TOKEN_TYPE_ERROR)             \
  V(WASM_TOKEN_TYPE_EOF)               \
  V(WASM_TOKEN_TYPE_LPAR)              \
  V(WASM_TOKEN_TYPE_RPAR)              \
  V(WASM_TOKEN_TYPE_INT)               \
  V(WASM_TOKEN_TYPE_FLOAT)             \
  V(WASM_TOKEN_TYPE_TEXT)              \
  V(WASM_TOKEN_TYPE_I32)               \
  V(WASM_TOKEN_TYPE_I64)               \
  V(WASM_TOKEN_TYPE_F32)               \
  V(WASM_TOKEN_TYPE_F64)               \
  V(WASM_TOKEN_TYPE_NOP)               \
  V(WASM_TOKEN_TYPE_BLOCK)             \
  V(WASM_TOKEN_TYPE_IF)                \
  V(WASM_TOKEN_TYPE_IF_ELSE)           \
  V(WASM_TOKEN_TYPE_LOOP)              \
  V(WASM_TOKEN_TYPE_LABEL)             \
  V(WASM_TOKEN_TYPE_BR)                \
  V(WASM_TOKEN_TYPE_BR_IF)             \
  V(WASM_TOKEN_TYPE_TABLESWITCH)       \
  V(WASM_TOKEN_TYPE_CASE)              \
  V(WASM_TOKEN_TYPE_CALL)              \
  V(WASM_TOKEN_TYPE_CALL_IMPORT)       \
  V(WASM_TOKEN_TYPE_CALL_INDIRECT)     \
  V(WASM_TOKEN_TYPE_RETURN)            \
  V(WASM_TOKEN_TYPE_GET_LOCAL)         \
  V(WASM_TOKEN_TYPE_SET_LOCAL)         \
  V(WASM_TOKEN_TYPE_I32_LOAD)          \
  V(WASM_TOKEN_TYPE_I64_LOAD)          \
  V(WASM_TOKEN_TYPE_F32_LOAD)          \
  V(WASM_TOKEN_TYPE_F64_LOAD)          \
  V(WASM_TOKEN_TYPE_I32_STORE)         \
  V(WASM_TOKEN_TYPE_I64_STORE)         \
  V(WASM_TOKEN_TYPE_F32_STORE)         \
  V(WASM_TOKEN_TYPE_F64_STORE)         \
  V(WASM_TOKEN_TYPE_I32_LOAD8_S)       \
  V(WASM_TOKEN_TYPE_I32_LOAD8_U)       \
  V(WASM_TOKEN_TYPE_I32_LOAD16_S)      \
  V(WASM_TOKEN_TYPE_I32_LOAD16_U)      \
  V(WASM_TOKEN_TYPE_I64_LOAD8_S)       \
  V(WASM_TOKEN_TYPE_I64_LOAD8_U)       \
  V(WASM_TOKEN_TYPE_I64_LOAD16_S)      \
  V(WASM_TOKEN_TYPE_I64_LOAD16_U)      \
  V(WASM_TOKEN_TYPE_I64_LOAD32_S)      \
  V(WASM_TOKEN_TYPE_I64_LOAD32_U)      \
  V(WASM_TOKEN_TYPE_I32_STORE8)        \
  V(WASM_TOKEN_TYPE_I32_STORE16)       \
  V(WASM_TOKEN_TYPE_I64_STORE8)        \
  V(WASM_TOKEN_TYPE_I64_STORE16)       \
  V(WASM_TOKEN_TYPE_I64_STORE32)       \
  V(WASM_TOKEN_TYPE_OFFSET)            \
  V(WASM_TOKEN_TYPE_ALIGN)             \
  V(WASM_TOKEN_TYPE_I32_CONST)         \
  V(WASM_TOKEN_TYPE_I64_CONST)         \
  V(WASM_TOKEN_TYPE_F32_CONST)         \
  V(WASM_TOKEN_TYPE_F64_CONST)         \
  V(WASM_TOKEN_TYPE_I32_CLZ)           \
  V(WASM_TOKEN_TYPE_I64_CLZ)           \
  V(WASM_TOKEN_TYPE_I32_CTZ)           \
  V(WASM_TOKEN_TYPE_I64_CTZ)           \
  V(WASM_TOKEN_TYPE_I32_POPCNT)        \
  V(WASM_TOKEN_TYPE_I64_POPCNT)        \
  V(WASM_TOKEN_TYPE_F32_NEG)           \
  V(WASM_TOKEN_TYPE_F64_NEG)           \
  V(WASM_TOKEN_TYPE_F32_ABS)           \
  V(WASM_TOKEN_TYPE_F64_ABS)           \
  V(WASM_TOKEN_TYPE_F32_SQRT)          \
  V(WASM_TOKEN_TYPE_F64_SQRT)          \
  V(WASM_TOKEN_TYPE_F32_CEIL)          \
  V(WASM_TOKEN_TYPE_F64_CEIL)          \
  V(WASM_TOKEN_TYPE_F32_FLOOR)         \
  V(WASM_TOKEN_TYPE_F64_FLOOR)         \
  V(WASM_TOKEN_TYPE_F32_TRUNC)         \
  V(WASM_TOKEN_TYPE_F64_TRUNC)         \
  V(WASM_TOKEN_TYPE_F32_NEAREST)       \
  V(WASM_TOKEN_TYPE_F64_NEAREST)       \
  V(WASM_TOKEN_TYPE_I32_ADD)           \
  V(WASM_TOKEN_TYPE_I64_ADD)           \
  V(WASM_TOKEN_TYPE_I32_SUB)           \
  V(WASM_TOKEN_TYPE_I64_SUB)           \
  V(WASM_TOKEN_TYPE_I32_MUL)           \
  V(WASM_TOKEN_TYPE_I64_MUL)           \
  V(WASM_TOKEN_TYPE_I32_DIV_S)         \
  V(WASM_TOKEN_TYPE_I64_DIV_S)         \
  V(WASM_TOKEN_TYPE_I32_DIV_U)         \
  V(WASM_TOKEN_TYPE_I64_DIV_U)         \
  V(WASM_TOKEN_TYPE_I32_REM_S)         \
  V(WASM_TOKEN_TYPE_I64_REM_S)         \
  V(WASM_TOKEN_TYPE_I32_REM_U)         \
  V(WASM_TOKEN_TYPE_I64_REM_U)         \
  V(WASM_TOKEN_TYPE_I32_AND)           \
  V(WASM_TOKEN_TYPE_I64_AND)           \
  V(WASM_TOKEN_TYPE_I32_OR)            \
  V(WASM_TOKEN_TYPE_I64_OR)            \
  V(WASM_TOKEN_TYPE_I32_XOR)           \
  V(WASM_TOKEN_TYPE_I64_XOR)           \
  V(WASM_TOKEN_TYPE_I32_SHL)           \
  V(WASM_TOKEN_TYPE_I64_SHL)           \
  V(WASM_TOKEN_TYPE_I32_SHR_U)         \
  V(WASM_TOKEN_TYPE_I64_SHR_U)         \
  V(WASM_TOKEN_TYPE_I32_SHR_S)         \
  V(WASM_TOKEN_TYPE_I64_SHR_S)         \
  V(WASM_TOKEN_TYPE_F32_ADD)           \
  V(WASM_TOKEN_TYPE_F64_ADD)           \
  V(WASM_TOKEN_TYPE_F32_SUB)           \
  V(WASM_TOKEN_TYPE_F64_SUB)           \
  V(WASM_TOKEN_TYPE_F32_MUL)           \
  V(WASM_TOKEN_TYPE_F64_MUL)           \
  V(WASM_TOKEN_TYPE_F32_DIV)           \
  V(WASM_TOKEN_TYPE_F64_DIV)           \
  V(WASM_TOKEN_TYPE_F32_MIN)           \
  V(WASM_TOKEN_TYPE_F64_MIN)           \
  V(WASM_TOKEN_TYPE_F32_MAX)           \
  V(WASM_TOKEN_TYPE_F64_MAX)           \
  V(WASM_TOKEN_TYPE_F32_COPYSIGN)      \
  V(WASM_TOKEN_TYPE_F64_COPYSIGN)      \
  V(WASM_TOKEN_TYPE_I32_EQ)            \
  V(WASM_TOKEN_TYPE_I64_EQ)            \
  V(WASM_TOKEN_TYPE_I32_NE)            \
  V(WASM_TOKEN_TYPE_I64_NE)            \
  V(WASM_TOKEN_TYPE_I32_LT_S)          \
  V(WASM_TOKEN_TYPE_I64_LT_S)          \
  V(WASM_TOKEN_TYPE_I32_LT_U)          \
  V(WASM_TOKEN_TYPE_I64_LT_U)          \
  V(WASM_TOKEN_TYPE_I32_LE_S)          \
  V(WASM_TOKEN_TYPE_I64_LE_S)          \
  V(WASM_TOKEN_TYPE_I32_LE_U)          \
  V(WASM_TOKEN_TYPE_I64_LE_U)          \
  V(WASM_TOKEN_TYPE_I32_GT_S)          \
  V(WASM_TOKEN_TYPE_I64_GT_S)          \
  V(WASM_TOKEN_TYPE_I32_GT_U)          \
  V(WASM_TOKEN_TYPE_I64_GT_U)          \
  V(WASM_TOKEN_TYPE_I32_GE_S)          \
  V(WASM_TOKEN_TYPE_I64_GE_S)          \
  V(WASM_TOKEN_TYPE_I32_GE_U)          \
  V(WASM_TOKEN_TYPE_I64_GE_U)          \
  V(WASM_TOKEN_TYPE_F32_EQ)            \
  V(WASM_TOKEN_TYPE_F64_EQ)            \
  V(WASM_TOKEN_TYPE_F32_NE)            \
  V(WASM_TOKEN_TYPE_F64_NE)            \
  V(WASM_TOKEN_TYPE_F32_LT)            \
  V(WASM_TOKEN_TYPE_F64_LT)            \
  V(WASM_TOKEN_TYPE_F32_LE)            \
  V(WASM_TOKEN_TYPE_F64_LE)            \
  V(WASM_TOKEN_TYPE_F32_GT)            \
  V(WASM_TOKEN_TYPE_F64_GT)            \
  V(WASM_TOKEN_TYPE_F32_GE)            \
  V(WASM_TOKEN_TYPE_F64_GE)            \
  V(WASM_TOKEN_TYPE_I64_EXTEND_S_I32)  \
  V(WASM_TOKEN_TYPE_I64_EXTEND_U_I32)  \
  V(WASM_TOKEN_TYPE_I32_WRAP_I64)      \
  V(WASM_TOKEN_TYPE_I32_TRUNC_S_F32)   \
  V(WASM_TOKEN_TYPE_I64_TRUNC_S_F32)   \
  V(WASM_TOKEN_TYPE_I32_TRUNC_U_F32)   \
  V(WASM_TOKEN_TYPE_I64_TRUNC_U_F32)   \
  V(WASM_TOKEN_TYPE_I32_TRUNC_S_F64)   \
  V(WASM_TOKEN_TYPE_I64_TRUNC_S_F64)   \
  V(WASM_TOKEN_TYPE_I32_TRUNC_U_F64)   \
  V(WASM_TOKEN_TYPE_I64_TRUNC_U_F64)   \
  V(WASM_TOKEN_TYPE_F32_CONVERT_S_I32) \
  V(WASM_TOKEN_TYPE_F64_CONVERT_S_I32) \
  V(WASM_TOKEN_TYPE_F32_CONVERT_U_I32) \
  V(WASM_TOKEN_TYPE_F64_CONVERT_U_I32) \
  V(WASM_TOKEN_TYPE_F32_CONVERT_S_I64) \
  V(WASM_TOKEN_TYPE_F64_CONVERT_S_I64) \
  V(WASM_TOKEN_TYPE_F32_CONVERT_U_I64) \
  V(WASM_TOKEN_TYPE_F64_CONVERT_U_I64) \
  V(WASM_TOKEN_TYPE_F64_PROMOTE_F32)   \
  V(WASM_TOKEN_TYPE_F32_DEMOTE_F64)    \
  V(WASM_TOKEN_TYPE_F32_REINTPRET_I32) \
  V(WASM_TOKEN_TYPE_F64_REINTPRET_I64) \
  V(WASM_TOKEN_TYPE_I32_REINTPRET_F32) \
  V(WASM_TOKEN_TYPE_I64_REINTPRET_F64) \
  V(WASM_TOKEN_TYPE_I32_SELECT)        \
  V(WASM_TOKEN_TYPE_I64_SELECT)        \
  V(WASM_TOKEN_TYPE_F32_SELECT)        \
  V(WASM_TOKEN_TYPE_F64_SELECT)        \
  V(WASM_TOKEN_TYPE_UNREACHABLE)       \
  V(WASM_TOKEN_TYPE_MEMORY_SIZE)       \
  V(WASM_TOKEN_TYPE_GROW_MEMORY)       \
  V(WASM_TOKEN_TYPE_HAS_FEATURE)       \
  V(WASM_TOKEN_TYPE_TYPE)              \
  V(WASM_TOKEN_TYPE_FUNC)              \
  V(WASM_TOKEN_TYPE_PARAM)             \
  V(WASM_TOKEN_TYPE_RESULT)            \
  V(WASM_TOKEN_TYPE_LOCAL)             \
  V(WASM_TOKEN_TYPE_MODULE)            \
  V(WASM_TOKEN_TYPE_MEMORY)            \
  V(WASM_TOKEN_TYPE_SEGMENT)           \
  V(WASM_TOKEN_TYPE_IMPORT)            \
  V(WASM_TOKEN_TYPE_EXPORT)            \
  V(WASM_TOKEN_TYPE_TABLE)             \
  V(WASM_TOKEN_TYPE_ASSERT_INVALID)    \
  V(WASM_TOKEN_TYPE_ASSERT_RETURN)     \
  V(WASM_TOKEN_TYPE_ASSERT_RETURN_NAN) \
  V(WASM_TOKEN_TYPE_ASSERT_TRAP)       \
  V(WASM_TOKEN_TYPE_INVOKE)            \
  V(WASM_TOKEN_TYPE_NAME)

typedef enum WasmTokenType {
#define V(name) name,
  WASM_TOKEN_TYPES(V)
#undef V
} WasmTokenType;

#endif /* WASM_TOKENS_H_ */
