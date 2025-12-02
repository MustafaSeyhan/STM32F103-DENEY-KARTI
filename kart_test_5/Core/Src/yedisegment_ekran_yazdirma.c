/*
 * yedisegment_ekran_yazdirma.c
 *
 *  Created on: Jan 16, 2025
 *      Author: Mustafa
 */
#include <main.h>
#include <yedisegment_ekran_yazdirma.h>

void yedi_segment_yazdir(int sayi)
{
    uint16_t mevcut_deger = GPIOB->ODR; // Port B'nin mevcut çıkış değerini oku
    mevcut_deger &= 0x00FF;

    HAL_GPIO_WritePin(trs_yedi_segment_GPIO_Port, trs_led_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(trs_yedi_segment_GPIO_Port, trs_yedi_segment_Pin, GPIO_PIN_SET);

	switch(sayi)
	{
	case 0:  mevcut_deger |= (0xD7 << 8); break;        // Son 8 bite değerini yaz
	case 1:  mevcut_deger |= (0x84 << 8); break;       // Son 8 bite değerini yaz
	case 2:  mevcut_deger |= (0xB3 << 8); break;        // Son 8 bite değerini yaz
	case 3:  mevcut_deger |= (0xB5 << 8); break;        // Son 8 bite değerini yaz
	case 4:  mevcut_deger |= (0xE4 << 8); break;        // Son 8 bite değerini yaz
	case 5:  mevcut_deger |= (0x75 << 8); break;        // Son 8 bite değerini yaz
	case 6:  mevcut_deger |= (0x67 << 8); break;        // Son 8 bite değerini yaz
	case 7:  mevcut_deger |= (0x94 << 8); break;        // Son 8 bite değerini yaz
	case 8:  mevcut_deger |= (0xF7 << 8); break;        // Son 8 bite değerini yaz
	case 9:  mevcut_deger |= (0xF4 << 8); break;        // Son 8 bite değerini yaz
	}

	GPIOB->ODR = mevcut_deger;

}


