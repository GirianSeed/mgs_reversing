	opt	c+, at+, e+, n-
	section overlay.text

	xdef d03a_red_alrt_800C48BC
d03a_red_alrt_800C48BC:
	dw 0x3C02800C ; 800C48BC
	dw 0xAC503270 ; 800C48C0
	dw 0x8FB00028 ; 800C48C4
	dw 0x03E00008 ; 800C48C8
	dw 0x27BD0030 ; 800C48CC
