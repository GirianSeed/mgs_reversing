	opt	c+, at+, e+, n-
	section overlay.text

	xdef s02c_fadeio_800DFDD0
s02c_fadeio_800DFDD0:
	dw 0x27BDFFE0 ; 800DFDD0
	dw 0xAFB20018 ; 800DFDD4
	dw 0x00809021 ; 800DFDD8
	dw 0xAFB10014 ; 800DFDDC
	dw 0x26510110 ; 800DFDE0
	dw 0xAFB00010 ; 800DFDE4
	dw 0x24100001 ; 800DFDE8
	dw 0xAFBF001C ; 800DFDEC
	dw 0x02202821 ; 800DFDF0
	dw 0x26310030 ; 800DFDF4
	dw 0x8E44010C ; 800DFDF8
	dw 0x0C01BFFA ; 800DFDFC
	dw 0x2610FFFF ; 800DFE00
	dw 0x1E00FFFB ; 800DFE04
	dw 0x02202821 ; 800DFE08
	dw 0x8FBF001C ; 800DFE0C
	dw 0x8FB20018 ; 800DFE10
	dw 0x8FB10014 ; 800DFE14
	dw 0x8FB00010 ; 800DFE18
	dw 0x03E00008 ; 800DFE1C
	dw 0x27BD0020 ; 800DFE20