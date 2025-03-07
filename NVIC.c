/*
 * NVIC.c
 *
 *  Created on: Dec 10, 2024
 *      Author: Hayam
 */
# include "NVIC.h"
/************************************************************/

/* Function to enable Interrupt request for this specific IRQ.*/
void NVIC_EnableIRQ(NVIC_IRQType IRQ_Num)
{
  if (IRQ_Num >= 0)
  {
      if (IRQ_Num < 32)
      {
          NVIC_EN0_REG |= (1<<IRQ_Num);
      }
      else if (IRQ_Num < 64)
      {
          IRQ_Num = IRQ_Num - 32;
          NVIC_EN1_REG |= (1<<IRQ_Num);
      }
      else if (IRQ_Num < 96)
      {
          IRQ_Num = IRQ_Num - 64;
          NVIC_EN2_REG |= (1<<IRQ_Num);
      }
      else if (IRQ_Num < 128)
      {
          IRQ_Num = IRQ_Num - 96;
          NVIC_EN3_REG |= (1<<IRQ_Num);
      }
      else if (IRQ_Num < 139)
      {
          IRQ_Num = IRQ_Num - 128;
          NVIC_EN4_REG |= (1<<IRQ_Num);
      }
      else
      {
          /* report an error*/
      }
  }
  else
  {
      /* report an error*/
  }
}
/*****************************************************************************/
/* Function to disable Interrupt request for this specific IRQ.*/
void NVIC_DisableIRQ(NVIC_IRQType IRQ_Num)
{
    if (IRQ_Num >= 0)
    {
        if (IRQ_Num < 32)
        {
            NVIC_DIS0_REG |= (1<<IRQ_Num);
        }
        else if (IRQ_Num < 64)
        {
            IRQ_Num = IRQ_Num - 32;
            NVIC_DIS1_REG |= (1<<IRQ_Num);
        }
        else if (IRQ_Num < 96)
        {
            IRQ_Num = IRQ_Num - 64;
            NVIC_DIS2_REG |= (1<<IRQ_Num);
        }
        else if (IRQ_Num < 128)
        {
            IRQ_Num = IRQ_Num - 96;
            NVIC_DIS3_REG |= (1<<IRQ_Num);
        }
        else if (IRQ_Num < 139)
        {
            IRQ_Num = IRQ_Num - 128;
            NVIC_DIS4_REG |= (1<<IRQ_Num);
        }
        else
        {
            /* report an error*/
        }
    }
    else
    {
        /* report an error*/
    }

}
/***************************************************************************************************/
/*  Function to set the priority value for specific IRQ. */
void NVIC_SetPriorityIRQ(NVIC_IRQType IRQ_Num, NVIC_IRQPriorityType IRQ_Priority)
{
    if ((IRQ_Priority >= 0) && (IRQ_Priority < 8))
    {
        switch (IRQ_Num)
        {
            case 0:
                NVIC_PRI0_REG |= (IRQ_Priority << 5);
                break;
            case 1:
                NVIC_PRI0_REG |= (IRQ_Priority << 13);
                break;
            case 2:
                NVIC_PRI0_REG |= (IRQ_Priority << 21);
                break;
            case 3:
                NVIC_PRI0_REG |= (IRQ_Priority << 29);
                break;
            /***************************************/
            case 4:
                NVIC_PRI1_REG |= (IRQ_Priority << 5);
                break;
            case 5:
                NVIC_PRI1_REG |= (IRQ_Priority << 13);
                break;
            case 6:
                NVIC_PRI1_REG |= (IRQ_Priority << 21);
                break;
            case 7:
                NVIC_PRI1_REG |= (IRQ_Priority << 29);
                break;
            /************************************/
            case 8:
                NVIC_PRI2_REG |= (IRQ_Priority << 5);
                break;
            case 9:
                NVIC_PRI2_REG |= (IRQ_Priority << 13);
                break;
            case 10:
                NVIC_PRI2_REG |= (IRQ_Priority << 21);
                break;
            case 11:
                NVIC_PRI2_REG |= (IRQ_Priority << 29);
                break;
            /************************************/
            case 12:
                NVIC_PRI3_REG |= (IRQ_Priority << 5);
                break;
            case 13:
                NVIC_PRI3_REG |= (IRQ_Priority << 13);
                break;
            case 14:
                NVIC_PRI3_REG |= (IRQ_Priority << 21);
                break;
            case 15:
                NVIC_PRI3_REG |= (IRQ_Priority << 29);
                break;
            /************************************/
            case 16:
                NVIC_PRI4_REG |= (IRQ_Priority << 5);
                break;
            case 17:
                NVIC_PRI4_REG |= (IRQ_Priority << 13);
                break;
            case 18:
                NVIC_PRI4_REG |= (IRQ_Priority << 21);
                break;
            case 19:
                NVIC_PRI4_REG |= (IRQ_Priority << 29);
                break;
            /************************************/
            case 20:
                NVIC_PRI5_REG |= (IRQ_Priority << 5);
                break;
            case 21:
                NVIC_PRI5_REG |= (IRQ_Priority << 13);
                break;
            case 22:
                NVIC_PRI5_REG |= (IRQ_Priority << 21);
                break;
            case 23:
                NVIC_PRI5_REG |= (IRQ_Priority << 29);
                break;
            /************************************/
            case 24:
                NVIC_PRI6_REG |= (IRQ_Priority << 5);
                break;
            case 25:
                NVIC_PRI6_REG |= (IRQ_Priority << 13);
                break;
            case 26:
                NVIC_PRI6_REG |= (IRQ_Priority << 21);
                break;
            case 27:
                NVIC_PRI6_REG |= (IRQ_Priority << 29);
                break;
            /************************************/
            case 28:
                NVIC_PRI7_REG |= (IRQ_Priority << 5);
                break;
            case 29:
                NVIC_PRI7_REG |= (IRQ_Priority << 13);
                break;
            case 30:
                NVIC_PRI7_REG |= (IRQ_Priority << 21);
                break;
            case 31:
                NVIC_PRI7_REG |= (IRQ_Priority << 29);
                break;
            /************************************/
            case 32:
                NVIC_PRI8_REG |= (IRQ_Priority << 5);
                break;
            case 33:
                NVIC_PRI8_REG |= (IRQ_Priority << 13);
                break;
            case 34:
                NVIC_PRI8_REG |= (IRQ_Priority << 21);
                break;
            case 35:
                NVIC_PRI8_REG |= (IRQ_Priority << 29);
                break;
            /************************************/
            case 36:
                NVIC_PRI9_REG |= (IRQ_Priority << 5);
                break;
            case 37:
                NVIC_PRI9_REG |= (IRQ_Priority << 13);
                break;
            case 38:
                NVIC_PRI9_REG |= (IRQ_Priority << 21);
                break;
            case 39:
                NVIC_PRI9_REG |= (IRQ_Priority << 29);
                break;
            /************************************/
            case 40:
                NVIC_PRI10_REG |= (IRQ_Priority << 5);
                break;
            case 41:
                NVIC_PRI10_REG |= (IRQ_Priority << 13);
                break;
            case 42:
                NVIC_PRI10_REG |= (IRQ_Priority << 21);
                break;
            case 43:
                NVIC_PRI10_REG |= (IRQ_Priority << 29);
                break;
            /************************************/
            case 44:
                NVIC_PRI11_REG |= (IRQ_Priority << 5);
                break;
            case 45:
                NVIC_PRI11_REG |= (IRQ_Priority << 13);
                break;
            case 46:
                NVIC_PRI11_REG |= (IRQ_Priority << 21);
                break;
            case 47:
                NVIC_PRI11_REG |= (IRQ_Priority << 29);
                break;
            /************************************/
            case 48:
                NVIC_PRI12_REG |= (IRQ_Priority << 5);
                break;
            case 49:
                NVIC_PRI12_REG |= (IRQ_Priority << 13);
                break;
            case 50:
                NVIC_PRI12_REG |= (IRQ_Priority << 21);
                break;
            case 51:
                NVIC_PRI12_REG |= (IRQ_Priority << 29);
                break;
            /************************************/
            case 52:
                NVIC_PRI13_REG |= (IRQ_Priority << 5);
                break;
            case 53:
                NVIC_PRI13_REG |= (IRQ_Priority << 13);
                break;
            case 54:
                NVIC_PRI13_REG |= (IRQ_Priority << 21);
                break;
            case 55:
                NVIC_PRI13_REG |= (IRQ_Priority << 29);
                break;
            /************************************/
            case 56:
                NVIC_PRI14_REG |= (IRQ_Priority << 5);
                break;
            case 57:
                NVIC_PRI14_REG |= (IRQ_Priority << 13);
                break;
            case 58:
                NVIC_PRI14_REG |= (IRQ_Priority << 21);
                break;
            case 59:
                NVIC_PRI14_REG |= (IRQ_Priority << 29);
                break;
            /************************************/
            case 60:
                NVIC_PRI15_REG |= (IRQ_Priority << 5);
                break;
            case 61:
                NVIC_PRI15_REG |= (IRQ_Priority << 13);
                break;
            case 62:
                NVIC_PRI15_REG |= (IRQ_Priority << 21);
                break;
            case 63:
                NVIC_PRI15_REG |= (IRQ_Priority << 29);
                break;
            /************************************/
            case 64:
                NVIC_PRI16_REG |= (IRQ_Priority << 5);
                break;
            case 65:
                NVIC_PRI16_REG |= (IRQ_Priority << 13);
                break;
            case 66:
                NVIC_PRI16_REG |= (IRQ_Priority << 21);
                break;
            case 67:
                NVIC_PRI16_REG |= (IRQ_Priority << 29);
                break;
            /************************************/
            case 68:
                NVIC_PRI17_REG |= (IRQ_Priority << 5);
                break;
            case 69:
                NVIC_PRI17_REG |= (IRQ_Priority << 13);
                break;
            case 70:
                NVIC_PRI17_REG |= (IRQ_Priority << 21);
                break;
            case 71:
                NVIC_PRI17_REG |= (IRQ_Priority << 29);
                break;
            /************************************/
            case 72:
                NVIC_PRI18_REG |= (IRQ_Priority << 5);
                break;
            case 73:
                NVIC_PRI18_REG |= (IRQ_Priority << 13);
                break;
            case 74:
                NVIC_PRI18_REG |= (IRQ_Priority << 21);
                break;
            case 75:
                NVIC_PRI18_REG |= (IRQ_Priority << 29);
                break;
            /************************************/
            case 76:
                NVIC_PRI19_REG |= (IRQ_Priority << 5);
                break;
            case 77:
                NVIC_PRI19_REG |= (IRQ_Priority << 13);
                break;
            case 78:
                NVIC_PRI19_REG |= (IRQ_Priority << 21);
                break;
            case 79:
                NVIC_PRI19_REG |= (IRQ_Priority << 29);
                break;
            /************************************/
            case 80:
                NVIC_PRI20_REG |= (IRQ_Priority << 5);
                break;
            case 81:
                NVIC_PRI20_REG |= (IRQ_Priority << 13);
                break;
            case 82:
                NVIC_PRI20_REG |= (IRQ_Priority << 21);
                break;
            case 83:
                NVIC_PRI20_REG |= (IRQ_Priority << 29);
                break;
            /************************************/
            case 84:
                NVIC_PRI21_REG |= (IRQ_Priority << 5);
                break;
            case 85:
                NVIC_PRI21_REG |= (IRQ_Priority << 13);
                break;
            case 86:
                NVIC_PRI21_REG |= (IRQ_Priority << 21);
                break;
            case 87:
                NVIC_PRI21_REG |= (IRQ_Priority << 29);
                break;
            /************************************/
            case 88:
                NVIC_PRI22_REG |= (IRQ_Priority << 5);
                break;
            case 89:
                NVIC_PRI22_REG |= (IRQ_Priority << 13);
                break;
            case 90:
                NVIC_PRI22_REG |= (IRQ_Priority << 21);
                break;
            case 91:
                NVIC_PRI22_REG |= (IRQ_Priority << 29);
                break;
            /************************************/
            case 92:
                NVIC_PRI23_REG |= (IRQ_Priority << 5);
                break;
            case 93:
                NVIC_PRI23_REG |= (IRQ_Priority << 13);
                break;
            case 94:
                NVIC_PRI23_REG |= (IRQ_Priority << 21);
                break;
            case 95:
                NVIC_PRI23_REG |= (IRQ_Priority << 29);
                break;
            /************************************/
            case 96:
                NVIC_PRI24_REG |= (IRQ_Priority << 5);
                break;
            case 97:
                NVIC_PRI24_REG |= (IRQ_Priority << 13);
                break;
            case 98:
                NVIC_PRI24_REG |= (IRQ_Priority << 21);
                break;
            case 99:
                NVIC_PRI24_REG |= (IRQ_Priority << 29);
                break;
            /************************************/
            case 100:
                NVIC_PRI25_REG |= (IRQ_Priority << 5);
                break;
            case 101:
                NVIC_PRI25_REG |= (IRQ_Priority << 13);
                break;
            case 102:
                NVIC_PRI25_REG |= (IRQ_Priority << 21);
                break;
            case 103:
                NVIC_PRI25_REG |= (IRQ_Priority << 29);
                break;
            /************************************/
            case 104:
                NVIC_PRI26_REG |= (IRQ_Priority << 5);
                break;
            case 105:
                NVIC_PRI26_REG |= (IRQ_Priority << 13);
                break;
            case 106:
                NVIC_PRI26_REG |= (IRQ_Priority << 21);
                break;
            case 107:
                NVIC_PRI26_REG |= (IRQ_Priority << 29);
                break;
            /************************************/
            case 108:
                NVIC_PRI27_REG |= (IRQ_Priority << 5);
                break;
            case 109:
                NVIC_PRI27_REG |= (IRQ_Priority << 13);
                break;
            case 110:
                NVIC_PRI27_REG |= (IRQ_Priority << 21);
                break;
            case 111:
                NVIC_PRI27_REG |= (IRQ_Priority << 29);
                break;
            /************************************/
            case 112:
                NVIC_PRI28_REG |= (IRQ_Priority << 5);
                break;
            case 113:
                NVIC_PRI28_REG |= (IRQ_Priority << 13);
                break;
            case 114:
                NVIC_PRI28_REG |= (IRQ_Priority << 21);
                break;
            case 115:
                NVIC_PRI28_REG |= (IRQ_Priority << 29);
                break;
            /************************************/
            case 116:
                NVIC_PRI29_REG |= (IRQ_Priority << 5);
                break;
            case 117:
                NVIC_PRI29_REG |= (IRQ_Priority << 13);
                break;
            case 118:
                NVIC_PRI29_REG |= (IRQ_Priority << 21);
                break;
            case 119:
                NVIC_PRI29_REG |= (IRQ_Priority << 29);
                break;
            /************************************/
            case 120:
                NVIC_PRI30_REG |= (IRQ_Priority << 5);
                break;
            case 121:
                NVIC_PRI30_REG |= (IRQ_Priority << 13);
                break;
            case 122:
                NVIC_PRI30_REG |= (IRQ_Priority << 21);
                break;
            case 123:
                NVIC_PRI30_REG |= (IRQ_Priority << 29);
                break;
            /************************************/
            case 124:
                NVIC_PRI31_REG |= (IRQ_Priority << 5);
                break;
            case 125:
                NVIC_PRI31_REG |= (IRQ_Priority << 13);
                break;
            case 126:
                NVIC_PRI31_REG |= (IRQ_Priority << 21);
                break;
            case 127:
                NVIC_PRI31_REG |= (IRQ_Priority << 29);
                break;
            /************************************/
            case 128:
                NVIC_PRI32_REG |= (IRQ_Priority << 5);
                break;
            case 129:
                NVIC_PRI32_REG |= (IRQ_Priority << 13);
                break;
            case 130:
                NVIC_PRI32_REG |= (IRQ_Priority << 21);
                break;
            case 131:
                NVIC_PRI32_REG |= (IRQ_Priority << 29);
                break;
            /************************************/
            case 132:
                NVIC_PRI33_REG |= (IRQ_Priority << 5);
                break;
            case 133:
                NVIC_PRI33_REG |= (IRQ_Priority << 13);
                break;
            case 134:
                NVIC_PRI33_REG |= (IRQ_Priority << 21);
                break;
            case 135:
                NVIC_PRI33_REG |= (IRQ_Priority << 29);
                break;
            /************************************/
            case 136:
                NVIC_PRI34_REG |= (IRQ_Priority << 5);
                break;
            case 137:
                NVIC_PRI34_REG |= (IRQ_Priority << 13);
                break;
            case 138:
                NVIC_PRI34_REG |= (IRQ_Priority << 21);
                break;
            default:
                /* report an error ( this IRQ_num does not exit in the vector table of this target ) */
                break;
        }
    }
    else
    {
        /* report an error ( this level of priority does not exit */
    }
}
/************************************************************************************************************/
/* Function to enable specific ARM system or fault exceptions. */
void NVIC_EnableException(NVIC_ExceptionType Exception_Num)
{
   if (Exception_Num > 3)
   {
     switch(Exception_Num)
     {
     case 4:
         NVIC_SYSTEM_SYSHNDCTRL |= (1<<16);
         break;
     case 5:
         NVIC_SYSTEM_SYSHNDCTRL |= (1<<17);
         break;
     case 6:
         NVIC_SYSTEM_SYSHNDCTRL |= (1<<18);
         break;
     default:
         break;

     }
   }
   else
   {
       /* report an error */
   }
}
/***********************************************************************************************************/
/*  Function to disable specific ARM system or fault exceptions. */
void NVIC_DisableException(NVIC_ExceptionType Exception_Num)
{
    if (Exception_Num > 3)
    {
      switch(Exception_Num)
      {
      case 4:
          NVIC_SYSTEM_SYSHNDCTRL &= ~(1<<16);
          break;
      case 5:
          NVIC_SYSTEM_SYSHNDCTRL &= ~(1<<17);
          break;
      case 6:
          NVIC_SYSTEM_SYSHNDCTRL &= ~(1<<18);
          break;
      default:
          break;

      }
    }
    else
    {
        /* report an error */
    }
}
/***********************************************************************************************************/
/* Function to set the priority value for specific ARM system or fault exceptions.*/
void NVIC_SetPriorityException(NVIC_ExceptionType Exception_Num, NVIC_ExceptionPriorityType Exception_Priority)
{
    if (Exception_Num > 3)
    {
      switch(Exception_Num)
      {
      case 4:
          NVIC_SYSTEM_PRI1_REG |= (Exception_Priority<<5);
          break;
      case 5:
          NVIC_SYSTEM_PRI1_REG |= (Exception_Priority<<13);
          break;
      case 6:
          NVIC_SYSTEM_PRI1_REG |= (Exception_Priority<<21);
          break;
      case 11:
          NVIC_SYSTEM_PRI2_REG |= (Exception_Priority<<29);
          break;
      case 12:
          NVIC_SYSTEM_PRI3_REG |= (Exception_Priority<<5);
          break;
      case 14:
          NVIC_SYSTEM_PRI3_REG |= (Exception_Priority<<21);
          break;
      case 15:
          NVIC_SYSTEM_PRI3_REG |= (Exception_Priority<<29);
          break;
      default:
          break;

      }
    }
    else
    {
        /* report an error */
    }
}



