

#pragma once
#include "pch.h"


class User
{
public:
	User() = default;
	User( UxInt32 id, SOCKET socket );
	~User();

public:
	UxVoid		Initialize();

public:
	UxVoid		SetAddr( const IN_ADDR& addr, const USHORT& port );
	UxString	GetAddr();

	UxInt32		GetId() const;

	UxVoid		SetName( UxString name );
	UxString	GetName();

	UxBool		IsAccess();
	UxVoid		SetAccess();

	UxVoid		AddCommand( UxString add );
	UxVoid		AddCommand( UxInt8* add );
	UxVoid		ClearCommand();
	UxString	GetCommand();

	UxBool		IsInRoom();
	UxVoid		SetRoomNum( UxInt32 roomNum );
	UxInt32		GetRoomNum();

protected:
	UxString	m_addr;

	UxInt32		m_id;
	UxString	m_name;
	UxBool		m_isAccess;

	SOCKET		m_socket;
	UxString	m_command;

	UxBool		m_isInRoom;
	UxInt32		m_roomNum;
};