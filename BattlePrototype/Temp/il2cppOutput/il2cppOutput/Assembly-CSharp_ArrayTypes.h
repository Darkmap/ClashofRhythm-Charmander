#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// Tile
struct Tile_t2606798;
// UserPlayer
struct UserPlayer_t3491826348;
// AIPlayer
struct AIPlayer_t74895657;

#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_Tile2606798.h"
#include "AssemblyU2DCSharp_UserPlayer3491826348.h"
#include "AssemblyU2DCSharp_AIPlayer74895657.h"

#pragma once
// Tile[]
struct TileU5BU5D_t4211174971  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Tile_t2606798 * m_Items[1];

public:
	inline Tile_t2606798 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Tile_t2606798 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Tile_t2606798 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UserPlayer[]
struct UserPlayerU5BU5D_t821885221  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) UserPlayer_t3491826348 * m_Items[1];

public:
	inline UserPlayer_t3491826348 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline UserPlayer_t3491826348 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, UserPlayer_t3491826348 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// AIPlayer[]
struct AIPlayerU5BU5D_t3221938196  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) AIPlayer_t74895657 * m_Items[1];

public:
	inline AIPlayer_t74895657 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline AIPlayer_t74895657 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, AIPlayer_t74895657 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
