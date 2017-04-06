#pragma once

#include "stdafx.h"
#include <string>

/*
	Content-Encoding gzip deflate br �𓀗p�̃C���^�[�t�F�[�X
	usage: feed -> read or dump -> read
*/

class IDecompressor
{
public:
	virtual ~IDecompressor() {};

	virtual void feed(const std::string& data) = 0;
	virtual void dump() = 0;
	virtual std::string read() = 0;

};
