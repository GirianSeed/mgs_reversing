	opt	c+, at+, e+, n-
	section overlay.text

	xdef s01a_blink_tx_800DDC7C
s01a_blink_tx_800DDC7C:
	dw 0x27BDFFE0 ; 800DDC7C
	dw 0xAFB00010 ; 800DDC80
	dw 0x00808021 ; 800DDC84
	dw 0xAFBF0018 ; 800DDC88
	dw 0xAFB10014 ; 800DDC8C
	dw 0x8E110BFC ; 800DDC90
	dw 0x14A00007 ; 800DDC94
	dw 0x2604009C ; 800DDC98
	dw 0x3C02800C ; 800DDC9C
	dw 0x00003021 ; 800DDCA0
	dw 0xAE000BE0 ; 800DDCA4
	dw 0x84453CE4 ; 800DDCA8
	dw 0x0C00D335 ; 800DDCAC
	dw 0x24070004 ; 800DDCB0
	dw 0x0C0375B8 ; 800DDCB4
	dw 0x02002021 ; 800DDCB8
	dw 0x32220001 ; 800DDCBC
	dw 0x14400003 ; 800DDCC0
	dw 0x3C02800E ; 800DDCC4
	dw 0x08037738 ; 800DDCC8
	dw 0x2442D798 ; 800DDCCC
	dw 0x32220002 ; 800DDCD0
	dw 0x10400007 ; 800DDCD4
	dw 0x3C02800E ; 800DDCD8
	dw 0x2442DD14 ; 800DDCDC
	dw 0xAE020BD0 ; 800DDCE0
	dw 0xAE000BD8 ; 800DDCE4
	dw 0xA6000070 ; 800DDCE8
	dw 0x08037740 ; 800DDCEC
	dw 0xA600006C ; 800DDCF0
	dw 0x96020E08 ; 800DDCF4
	dw 0x00000000 ; 800DDCF8
	dw 0xA602006E ; 800DDCFC
	dw 0x8FBF0018 ; 800DDD00
	dw 0x8FB10014 ; 800DDD04
	dw 0x8FB00010 ; 800DDD08
	dw 0x03E00008 ; 800DDD0C
	dw 0x27BD0020 ; 800DDD10