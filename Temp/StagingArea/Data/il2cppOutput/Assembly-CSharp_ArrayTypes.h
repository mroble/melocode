#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// ResetOnRespawn
struct ResetOnRespawn_t1603020250;

#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_ResetOnRespawn1603020250.h"

#pragma once
// ResetOnRespawn[]
struct ResetOnRespawnU5BU5D_t1002198399  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) ResetOnRespawn_t1603020250 * m_Items[1];

public:
	inline ResetOnRespawn_t1603020250 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline ResetOnRespawn_t1603020250 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, ResetOnRespawn_t1603020250 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
