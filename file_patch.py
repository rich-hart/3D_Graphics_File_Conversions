#!/usr/bin/env python
# encoding: utf-8
"""
untitled.py

Created by Richard Hart on 2013-08-13.
Copyright (c) 2013 __MyCompanyName__. All rights reserved.
"""

import sys
import os
import re


def main():
	f = open('../mapical_trimmed_color.iv');
#	f = open('./mesh_and_color_surface.iv', 'r')
	read_data=f.read()
	#print read_data
	f.closed
	HASH = r'\#'
	NEWLINE = r'\n'
	LEFT_BRAC = r'\['
	RIGHT_BRAC = r'\]'
	data_comments_removed=re.sub(HASH+r'.*'+NEWLINE,'',read_data)
	#print data_comments_removed
	data_comments_removed=re.sub(HASH+r'.*'+NEWLINE,'',read_data)
	#print data_comments_removed
	data_brac_removed=re.sub(LEFT_BRAC+r'.*'+RIGHT_BRAC,'',data_comments_removed,flags=re.DOTALL)
	print data_brac_removed
if __name__ == '__main__':
	main()

