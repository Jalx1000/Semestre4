//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "simpleyCadenas.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
Cardinal Pot(int x,byte n)
{Cardinal p;
 if(n==0){
	p=1;
 }else{
	 p=Pot(x,n/2);
		 if(n%2==0){
			p=p*p;
		 }else{
				 p=x*p*p;
		 }
 }
 return p;
}

void __fastcall TForm1::Button1Click(TObject *Sender)
{
		//Edit2->Text=Pot(StrToInt(Edit1->Text));
}
//---------------------------------------------------------------------------
byte Mayor(Cardinal x)
{byte m;
 if(x<10){
	m=x;
 }else{
		 m=Mayor(x/10);
		 if(x%10>m){
			m=x%10;
		 }
 }
return m;
}
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	Edit2->Text=Mayor(StrToInt(Edit1->Text));
}
//---------------------------------------------------------------------------
byte SumaD(Cardinal x)
{byte s;
	if(x<10){
		s=x;
	}else{
		s=SumaD(x/10);
		s=s+x%10;
	}

return s;
}
void __fastcall TForm1::Button3Click(TObject *Sender)
{
	Edit2->Text=SumaD(StrToInt(Edit1->Text));
}
//---------------------------------------------------------------------------
void DigitoZ(Cardinal &x,byte z)
{
	if(x<10){
		if(x==z){
			x=0;
		}
		}else{
			//456
			byte d=x%10;//6
			x=x/10;//45
			DigitoZ(x,z);
			if(d!=z){
				x=x*10+d;
			}
		}
}
void __fastcall TForm1::Button4Click(TObject *Sender)
{Cardinal xx=StrToInt(Edit1->Text);
	byte zz=StrToInt(Edit2->Text);
	DigitoZ(xx,zz);
	Edit3->Text=xx;
}
//---------------------------------------------------------------------------
//Escribir un proceso que lleve el mayor de los dígitos al final de un número.
void MoverMayor(Cardinal &x)
{
   if(x>9){
		byte d= x%10;
		x/=10;
		MoverMayor(x);
		if(x%10>d){
			x=(x/10)*100+d*10+x%10;
		}else{
			x=x*10+d;
		}
	}
}
void __fastcall TForm1::Button5Click(TObject *Sender)
{Cardinal xx;
 byte zz;
	xx=StrToInt(Edit1->Text);
	MoverMayor(xx);
	Edit3->Text=xx;
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------CADENAS-----------------------------------------
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
bool EsVocal(char z)
{AnsiString vocales="aeiouAEIOU";
	return vocales.Pos(z)>0;
}

byte CantVocales(AnsiString x)
{byte c;
	if(x==""){
		c=0;
	}else{//Hola a todos
		char z=x[1];				//Z="H"
		x.Delete(1,1);      //x="ola a todos"
		c=CantVocales(x);   //c=5
		if(EsVocal(z))
			c++;
  }
 return c;
}
void __fastcall TForm1::Button6Click(TObject *Sender)
{
  Edit2->Text=CantVocales(Edit1->Text);
}
//---------------------------------------------------------------------------
AnsiString InvCadena(AnsiString x)
{AnsiString  y;
	if(x==""){
		y=x;
	} else{
		char z=x[1];
		x.Delete(1,1);
		y=InvCadena(x);
		y=y+z;
	}
 return y;
}

void __fastcall TForm1::Button7Click(TObject *Sender)
{
Edit2->Text=InvCadena(Edit1->Text);
	}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
//---------------------------2do principio de induccion----------------------
//---------------------------------------------------------------------------
//------Suponiendo q P[k]es verdader(m<k<n) probar q P[n] tambien lo es------
//---------------------------------------------------------------------------
//---CASO BASE--- se debe resolver el problema (sin recursion) para los
//----------------primeros m valores del dominio de la variable de recursion-
//--Caso Gneral--- RESUELVE DATOS CON N DATOS MENOS
//---------------------------------------------------------------------------
//------------------------------------HIPOTESIS------------------------------
//----k=n-1----------k=n-2--------k=n/2-------------------------------------
//---------------------------------------------------------------------------
AnsiString InCadena(AnsiString x)
{

}

