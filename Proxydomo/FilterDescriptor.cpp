/**
*	@file	FilterDescriptor.cpp
*	@brief	�t�B���^�[ ���\��
*/
/**
	this file is part of Proxydomo
	Copyright (C) amate 2013-

	This program is free software; you can redistribute it and/or
	modify it under the terms of the GNU General Public License
	as published by the Free Software Foundation; either
	version 2 of the License, or (at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/
#include "stdafx.h"
#include "FilterDescriptor.h"
#include "Matcher.h"

///////////////////////////////////////////////////////////////
// CFilterDescriptor

CFilterDescriptor::CFilterDescriptor()
{
	Clear();
}



/// �e�� Matcher ���쐬����
bool	CFilterDescriptor::CreateMatcher()
{
	errorMsg.clear();

	spBoundsMatcher = (boundsPattern.size() > 0) ? 
		Proxydomo::CMatcher::CreateMatcher(boundsPattern, errorMsg) : nullptr;
	spURLMatcher	= (urlPattern.size() > 0) ? 
		Proxydomo::CMatcher::CreateMatcher(urlPattern, errorMsg) : nullptr;
	spTextMatcher	= (matchPattern.size() > 0) ? 
		Proxydomo::CMatcher::CreateMatcher(matchPattern, errorMsg) : nullptr;

	return errorMsg.empty();
}


/// Clear all content
void	CFilterDescriptor::Clear()
{
	Active = true;
	title.clear();
	version.clear();
	author.clear();
	comment.clear();
	filterType	= kFilterText;
	headerName.clear();
	multipleMatches	= false;
	windowWidth	= 256;
	boundsPattern.clear();
	urlPattern.clear();
	matchPattern.clear();
	replacePattern.clear();
}



// Check if all data is valid
// �����Ȃ�errorMsg�ɃG���[������
void	CFilterDescriptor::TestValidity()
{
    errorMsg.clear();
    if (title.empty()) {
        errorMsg = /*settings.getMessage*/("INVALID_FILTER_TITLE");
    } else if (filterType == kFilterText) {
        if (matchPattern.empty()) {
            errorMsg = /*settings.getMessage*/("INVALID_FILTER_MATCHEMPTY");
        } else if (windowWidth <= 0) {
            errorMsg = /*settings.getMessage*/("INVALID_FILTER_WIDTH");
        } else {
			CreateMatcher();
        }
    } else {	// ����M�w�b�_
        if (headerName.empty()) {
            errorMsg = /*settings.getMessage*/("INVALID_FILTER_HEADEREMPTY");
        } else {
            CreateMatcher();
        }
    }
}





