#include "stdafx.h"
#include "KeyBoard Form.h"
#include "Public Parameter.h"

using System::String;

void KeyBoard_Form::Function_Initialize()
{
	Ctrl_KeyBoardForm.GetControl()->radioButton1->CheckedChanged += MAKE_DELEGATE(System::EventHandler, radioButton1_CheckedChanged);
	Ctrl_KeyBoardForm.GetControl()->radioButton2->CheckedChanged += MAKE_DELEGATE(System::EventHandler, radioButton2_CheckedChanged);
	Ctrl_KeyBoardForm.GetControl()->button0->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button0_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button1->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button1_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button2->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button2_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button3->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button3_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button4->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button4_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button5->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button5_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button6->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button6_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button7->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button7_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button20->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button20_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button21->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button21_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button22->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button22_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button23->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button23_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button24->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button24_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button25->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button25_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button26->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button26_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button27->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button27_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button28->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button28_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button29->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button29_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button30->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button30_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button31->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button31_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button32->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button32_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button33->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button33_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button34->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button34_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button35->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button35_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button36->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button36_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button59->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button59_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button60->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button60_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button61->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button61_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button62->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button62_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button63->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button63_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button64->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button64_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button65->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button65_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button66->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button66_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button67->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button67_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button68->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button68_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button69->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button69_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button70->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button70_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button71->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button71_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button72->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button72_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button73->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button73_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button74->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button74_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button75->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button75_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button76->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button76_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button77->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button77_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button78->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button78_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button79->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button79_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button80->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button80_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button81->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button81_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button82->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button82_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button83->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button83_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button84->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button84_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button86->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button86_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button92->MouseDown += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button92_KeyDown);
	Ctrl_KeyBoardForm.GetControl()->button0->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button0_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button1->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button1_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button2->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button2_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button3->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button3_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button4->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button4_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button5->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button5_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button6->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button6_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button7->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button7_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button20->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button20_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button21->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button21_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button22->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button22_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button23->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button23_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button24->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button24_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button25->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button25_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button26->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button26_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button27->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button27_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button28->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button28_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button29->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button29_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button30->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button30_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button31->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button31_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button32->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button32_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button33->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button33_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button34->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button34_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button35->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button35_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button36->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button36_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button59->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button59_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button60->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button60_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button61->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button61_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button62->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button62_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button63->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button63_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button64->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button64_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button65->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button65_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button66->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button66_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button67->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button67_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button68->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button68_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button69->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button69_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button70->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button70_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button71->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button71_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button72->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button72_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button73->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button73_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button74->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button74_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button75->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button75_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button76->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button76_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button77->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button77_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button78->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button78_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button79->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button79_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button80->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button80_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button81->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button81_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button82->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button82_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button83->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button83_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button84->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button84_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button86->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button86_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button92->MouseUp += MAKE_DELEGATE(System::Windows::Forms::MouseEventHandler , button92_KeyUp);
	Ctrl_KeyBoardForm.GetControl()->button37->Click += MAKE_DELEGATE(System::EventHandler , button37_Click);
	Ctrl_KeyBoardForm.GetControl()->button38->Click += MAKE_DELEGATE(System::EventHandler , button38_Click);
	Ctrl_KeyBoardForm.GetControl()->button40->Click += MAKE_DELEGATE(System::EventHandler , button40_Click);
	Ctrl_KeyBoardForm.GetControl()->button44->Click += MAKE_DELEGATE(System::EventHandler , button44_Click);
	Ctrl_KeyBoardForm.GetControl()->button48->Click += MAKE_DELEGATE(System::EventHandler , button48_Click);
	Ctrl_KeyBoardForm.GetControl()->button49->Click += MAKE_DELEGATE(System::EventHandler , button49_Click);
	Ctrl_KeyBoardForm.GetControl()->button51->Click += MAKE_DELEGATE(System::EventHandler , button51_Click);
	Ctrl_KeyBoardForm.GetControl()->button55->Click += MAKE_DELEGATE(System::EventHandler , button55_Click);
	Ctrl_KeyBoardForm.GetControl()->button93->Click += MAKE_DELEGATE(System::EventHandler , button93_Click);
	Ctrl_KeyBoardForm.GetControl()->button94->Click += MAKE_DELEGATE(System::EventHandler , button94_Click);
	Ctrl_KeyBoardForm.GetControl()->button95->Click += MAKE_DELEGATE(System::EventHandler , button95_Click);
	Ctrl_KeyBoardForm.GetControl()->button96->Click += MAKE_DELEGATE(System::EventHandler , button96_Click);
	Ctrl_KeyBoardForm.GetControl()->button97->Click += MAKE_DELEGATE(System::EventHandler , button97_Click);
	Ctrl_KeyBoardForm.GetControl()->button98->Click += MAKE_DELEGATE(System::EventHandler , button98_Click);
	Ctrl_KeyBoardForm.GetControl()->button99->Click += MAKE_DELEGATE(System::EventHandler , button99_Click);
	Ctrl_KeyBoardForm.GetControl()->button100->Click += MAKE_DELEGATE(System::EventHandler , button100_Click);
	Ctrl_KeyBoardForm.GetControl()->button101->Click += MAKE_DELEGATE(System::EventHandler , button101_Click);
	Ctrl_KeyBoardForm.GetControl()->button102->Click += MAKE_DELEGATE(System::EventHandler , button102_Click);
	Ctrl_KeyBoardForm.GetControl()->button103->Click += MAKE_DELEGATE(System::EventHandler , button103_Click);
	Ctrl_KeyBoardForm.GetControl()->button104->Click += MAKE_DELEGATE(System::EventHandler , button104_Click);
	Ctrl_KeyBoardForm.GetControl()->button105->Click += MAKE_DELEGATE(System::EventHandler , button105_Click);
	Ctrl_KeyBoardForm.GetControl()->button106->Click += MAKE_DELEGATE(System::EventHandler , button106_Click);
	Ctrl_KeyBoardForm.GetControl()->button107->Click += MAKE_DELEGATE(System::EventHandler , button107_Click);
	Ctrl_KeyBoardForm.GetControl()->button108->Click += MAKE_DELEGATE(System::EventHandler , button108_Click);
	Ctrl_KeyBoardForm.GetControl()->button109->Click += MAKE_DELEGATE(System::EventHandler , button109_Click);
	Ctrl_KeyBoardForm.GetControl()->button110->Click += MAKE_DELEGATE(System::EventHandler , button110_Click);
	Ctrl_KeyBoardForm.GetControl()->button111->Click += MAKE_DELEGATE(System::EventHandler , button111_Click);
	Ctrl_KeyBoardForm.GetControl()->button112->Click += MAKE_DELEGATE(System::EventHandler , button112_Click);
	Ctrl_KeyBoardForm.GetControl()->button113->Click += MAKE_DELEGATE(System::EventHandler , button113_Click);
	Ctrl_KeyBoardForm.GetControl()->button114->Click += MAKE_DELEGATE(System::EventHandler , button114_Click);
}

#pragma region Key Button 0 SWC_KEYCODE_UNKNOWN

void KeyBoard_Form::button0_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button0->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,0);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,0);
	}
}

void KeyBoard_Form::button0_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button0->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button0->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,0);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button0->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,0);
	}
}

#pragma endregion

#pragma region Key Button 1 SWC_KEYCODE_VOL_UP

void KeyBoard_Form::button1_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button1->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,1);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,1);
	}
}

void KeyBoard_Form::button1_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button1->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button1->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,1);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button1->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,1);
	}
}

#pragma endregion

#pragma region Key Button 2 SWC_KEYCODE_VOL_Down

void KeyBoard_Form::button2_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button2->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,2);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,2);
	}
}

void KeyBoard_Form::button2_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button2->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button2->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,2);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button2->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,2);
	}
}

#pragma endregion

#pragma region Key Button 3 SWC_KEYCODE_SEEK_UP

void KeyBoard_Form::button3_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button3->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,3);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,3);
	}
}

void KeyBoard_Form::button3_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button3->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button3->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,3);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button3->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,3);
	}
}

#pragma endregion

#pragma region Key Button 4 SWC_KEYCODE_SEEK_DOWN

void KeyBoard_Form::button4_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button4->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,4);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,4);
	}
}

void KeyBoard_Form::button4_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button4->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button4->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,4);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button4->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,4);
	}
}

#pragma endregion

#pragma region Key Button 5 SWC_KEYCODE_SRC

void KeyBoard_Form::button5_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button5->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,5);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,5);
	}
}

void KeyBoard_Form::button5_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button5->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button5->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,5);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button5->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,5);
	}
}

#pragma endregion

#pragma region Key Button 6 SWC_KEYCODE_VR

void KeyBoard_Form::button6_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button6->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,6);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,6);
	}
}

void KeyBoard_Form::button6_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button6->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button6->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,6);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button6->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,6);
	}
}

#pragma endregion

#pragma region Key Button 7 SWC_KEYCODE_HUNGUP

void KeyBoard_Form::button7_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button7->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,7);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,7);
	}
}

void KeyBoard_Form::button7_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button7->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button7->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,7);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button7->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,7);
	}
}

#pragma endregion

#pragma region Key Button 20 KEY_CODE_UNKNOWN

void KeyBoard_Form::button20_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button20->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,20);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,20);
	}
}

void KeyBoard_Form::button20_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button20->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button20->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,20);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button20->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,20);
	}
}

#pragma endregion

#pragma region Key Button 21 KEY_CODE_JOGLEFT

void KeyBoard_Form::button21_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button21->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,21);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,21);
	}
}

void KeyBoard_Form::button21_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button21->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button21->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,21);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button21->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,21);
	}
}

#pragma endregion

#pragma region Key Button 22 KEY_CODE_JOGRIGHT

void KeyBoard_Form::button22_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button22->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,22);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,22);
	}
}

void KeyBoard_Form::button22_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button22->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button22->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,22);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button22->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,22);
	}
}

#pragma endregion

#pragma region Key Button 23 KEY_CODE_JOGUP

void KeyBoard_Form::button23_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button23->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,23);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,23);
	}
}

void KeyBoard_Form::button23_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button23->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button23->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,23);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button23->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,23);
	}
}

#pragma endregion

#pragma region Key Button 24 KEY_CODE_JOGDOWN

void KeyBoard_Form::button24_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button24->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,24);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,24);
	}
}

void KeyBoard_Form::button24_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button24->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button24->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,24);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button24->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,24);
	}
}

#pragma endregion

#pragma region Key Button 25 KEY_CODE_JOGUPLEFT

void KeyBoard_Form::button25_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button25->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,25);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,25);
	}
}

void KeyBoard_Form::button25_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button25->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button25->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,25);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button25->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,25);
	}
}

#pragma endregion

#pragma region Key Button 26 KEY_CODE_JOGUPRIGHT

void KeyBoard_Form::button26_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button26->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,26);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,26);
	}
}

void KeyBoard_Form::button26_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button26->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button26->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,26);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button26->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,26);
	}
}

#pragma endregion

#pragma region Key Button 27 KEY_CODE_JOGDOWNLEFT

void KeyBoard_Form::button27_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button27->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,27);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,27);
	}
}

void KeyBoard_Form::button27_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button27->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button27->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,27);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button27->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,27);
	}
}

#pragma endregion

#pragma region Key Button 28 KEY_CODE_JOGDOWNRIGHT

void KeyBoard_Form::button28_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button28->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,28);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,28);
	}
}

void KeyBoard_Form::button28_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button28->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button28->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,28);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button28->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,28);
	}
}

#pragma endregion

#pragma region Key Button 29 KEY_CODE_ENTER

void KeyBoard_Form::button29_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button29->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,29);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,29);
	}
}

void KeyBoard_Form::button29_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button29->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button29->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,29);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button29->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,29);
	}
}

#pragma endregion

#pragma region Key Button 30 KEY_CODE_1

void KeyBoard_Form::button30_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button30->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,30);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,30);
	}
}

void KeyBoard_Form::button30_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button30->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button30->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,30);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button30->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,30);
	}
}

#pragma endregion

#pragma region Key Button 31 KEY_CODE_2

void KeyBoard_Form::button31_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button31->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,31);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,31);
	}
}

void KeyBoard_Form::button31_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button31->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button31->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,31);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button31->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,31);
	}
}

#pragma endregion

#pragma region Key Button 32 KEY_CODE_3

void KeyBoard_Form::button32_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button32->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,32);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,32);
	}
}

void KeyBoard_Form::button32_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button32->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button32->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,32);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button32->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,32);
	}
}

#pragma endregion

#pragma region Key Button 33 KEY_CODE_4

void KeyBoard_Form::button33_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button33->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,33);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,33);
	}
}

void KeyBoard_Form::button33_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button33->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button33->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,33);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button33->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,33);
	}
}

#pragma endregion

#pragma region Key Button 34 KEY_CODE_5

void KeyBoard_Form::button34_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button34->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,34);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,34);
	}
}

void KeyBoard_Form::button34_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button34->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button34->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,34);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button34->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,34);
	}
}

#pragma endregion

#pragma region Key Button 35 KEY_CODE_6

void KeyBoard_Form::button35_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button35->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,35);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,35);
	}
}

void KeyBoard_Form::button35_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button35->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button35->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,35);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button35->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,35);
	}
}

#pragma endregion

#pragma region Key Button 36 KEY_CODE_CTRL_KNOB

void KeyBoard_Form::button36_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button36->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,36);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,36);
	}
}

void KeyBoard_Form::button36_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button36->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button36->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,36);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button36->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,36);
	}
}

#pragma endregion

#pragma region Key Button 59 KEY_CODE_BAND

void KeyBoard_Form::button59_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button59->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,59);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,59);
	}
}

void KeyBoard_Form::button59_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button59->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button59->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,59);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button59->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button59->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,59);
	}
}

#pragma endregion

#pragma region Key Button 60 KEY_CODE_MEDIA

void KeyBoard_Form::button60_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button60->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,60);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,60);
	}
}

void KeyBoard_Form::button60_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button60->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button60->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,60);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button60->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button60->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,60);
	}
}

#pragma endregion

#pragma region Key Button 61 KEY_CODE_CONFIG

void KeyBoard_Form::button61_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button61->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,61);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,61);
	}
}

void KeyBoard_Form::button61_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button61->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button61->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,61);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button61->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button61->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,61);
	}
}

#pragma endregion

#pragma region Key Button 62 KEY_CODE_INFO

void KeyBoard_Form::button62_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button62->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,62);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,62);
	}
}

void KeyBoard_Form::button62_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button62->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button62->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,62);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button62->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button62->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,62);
	}
}

#pragma endregion

#pragma region Key Button 63 KEY_CODE_DEST

void KeyBoard_Form::button63_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button63->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,63);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,63);
	}
}

void KeyBoard_Form::button63_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button63->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button63->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,63);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button63->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button63->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,63);
	}
}

#pragma endregion

#pragma region Key Button 64 KEY_CODE_NAV

void KeyBoard_Form::button64_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button64->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,64);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,64);
	}
}

void KeyBoard_Form::button64_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button64->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button64->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,64);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button64->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button64->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,64);
	}
}

#pragma endregion

#pragma region Key Button 65 KEY_CODE_BACK

void KeyBoard_Form::button65_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button65->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,65);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,65);
	}
}

void KeyBoard_Form::button65_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button65->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button65->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,65);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button65->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button65->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,65);
	}
}

#pragma endregion

#pragma region Key Button 66 KEY_CODE_FAV

void KeyBoard_Form::button66_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button66->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,66);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,66);
	}
}

void KeyBoard_Form::button66_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button66->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button66->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,66);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button66->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button66->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,66);
	}
}

#pragma endregion

#pragma region Key Button 67 KEY_CODE_REC

void KeyBoard_Form::button67_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button67->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,67);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,67);
	}
}

void KeyBoard_Form::button67_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button67->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button67->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,67);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button67->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button67->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,67);
	}
}

#pragma endregion

#pragma region Key Button 68 KEY_CODE_DELETE

void KeyBoard_Form::button68_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button68->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,68);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,68);
	}
}

void KeyBoard_Form::button68_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button68->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button68->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,68);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button68->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button68->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,68);
	}
}

#pragma endregion

#pragma region Key Button 69 KEY_CODE_PHONE

void KeyBoard_Form::button69_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button69->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,69);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,69);
	}
}

void KeyBoard_Form::button69_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button69->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button69->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,69);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button69->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button69->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,69);
	}
}

#pragma endregion

#pragma region Key Button 70 KEY_CODE_MUTE

void KeyBoard_Form::button70_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button70->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,70);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,70);
	}
}

void KeyBoard_Form::button70_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button70->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button70->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,70);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button70->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button70->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,70);
	}
}

#pragma endregion

#pragma region Key Button 71 KEY_CODE_POWER

void KeyBoard_Form::button71_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button71->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,71);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,71);
	}
}

void KeyBoard_Form::button71_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button71->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button71->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,71);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button71->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button71->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,71);
	}
}

#pragma endregion

#pragma region Key Button 72 KEY_CODE_VOL_DOWN_STEP1

void KeyBoard_Form::button72_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button72->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,72);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,72);
	}
}

void KeyBoard_Form::button72_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button72->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button72->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,72);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button72->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button72->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,72);
	}
}

#pragma endregion

#pragma region Key Button 73 KEY_CODE_VOL_UP_STEP1

void KeyBoard_Form::button73_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button73->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,73);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,73);
	}
}

void KeyBoard_Form::button73_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button73->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button73->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,73);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button73->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button73->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,73);
	}
}

#pragma endregion

#pragma region Key Button 74 KEY_CODE_VOL_DOWN_STEP2

void KeyBoard_Form::button74_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button74->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,74);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,74);
	}
}

void KeyBoard_Form::button74_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button74->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button74->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,74);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button74->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button74->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,74);
	}
}

#pragma endregion

#pragma region Key Button 75 KEY_CODE_VOL_UP_STEP2

void KeyBoard_Form::button75_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button75->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,75);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,75);
	}
}

void KeyBoard_Form::button75_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button75->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button75->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,75);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button75->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button75->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,75);
	}
}

#pragma endregion

#pragma region Key Button 76 KEY_CODE_VOL_DOWN_STEP3

void KeyBoard_Form::button76_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button76->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,76);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,76);
	}
}

void KeyBoard_Form::button76_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button76->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button76->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,76);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button76->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button76->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,76);
	}
}

#pragma endregion

#pragma region Key Button 77 KEY_CODE_VOL_UP_STEP3

void KeyBoard_Form::button77_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button77->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,77);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,77);
	}
}

void KeyBoard_Form::button77_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button77->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button77->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,77);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button77->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button77->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,77);
	}
}

#pragma endregion

#pragma region Key Button 78 KEY_CODE_SEEK_UP

void KeyBoard_Form::button78_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button78->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,78);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,78);
	}
}

void KeyBoard_Form::button78_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button78->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button78->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,78);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button78->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button78->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,78);
	}
}

#pragma endregion

#pragma region Key Button 79 KEY_CODE_SEEK_DN

void KeyBoard_Form::button79_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button79->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,79);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,79);
	}
}

void KeyBoard_Form::button79_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button79->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button79->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,79);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button79->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button79->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,79);
	}
}

#pragma endregion

#pragma region Key Button 80 KEY_CODE_HOME

void KeyBoard_Form::button80_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button80->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,80);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,80);
	}
}

void KeyBoard_Form::button80_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button80->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button80->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,80);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button80->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button80->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,80);
	}
}

#pragma endregion

#pragma region Key Button 81 KEY_CODE_SRC

void KeyBoard_Form::button81_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button81->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,81);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,81);
	}
}

void KeyBoard_Form::button81_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button81->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button81->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,81);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button81->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button81->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,81);
	}
}

#pragma endregion

#pragma region Key Button 82 KEY_CODE_PRESET

void KeyBoard_Form::button82_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button82->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,82);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,82);
	}
}

void KeyBoard_Form::button82_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button82->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button82->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,82);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button82->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button82->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,82);
	}
}

#pragma endregion

#pragma region Key Button 83 KEY_CODE_TONE

void KeyBoard_Form::button83_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button83->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,83);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,83);
	}
}

void KeyBoard_Form::button83_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button83->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button83->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,83);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button83->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button83->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,83);
	}
}

#pragma endregion

#pragma region Key Button 84 KEY_CODE_TIME

void KeyBoard_Form::button84_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button84->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,84);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,84);
	}
}

void KeyBoard_Form::button84_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button84->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button84->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,84);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button84->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button84->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,84);
	}
}

#pragma endregion

#pragma region Key Button 86 KEY_CODE_MENU

void KeyBoard_Form::button86_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button86->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,86);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,86);
	}
}

void KeyBoard_Form::button86_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button86->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button86->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,86);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button86->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button86->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,86);
	}
}

#pragma endregion

#pragma region Key Button 92 KEY_CODE_TUNE_KNOB

void KeyBoard_Form::button92_KeyDown(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button92->FlatStyle == System::Windows::Forms::FlatStyle::Standard)
		{
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,92);
		}
	}
	else
	{
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYDOWN,NULL,92);
	}
}

void KeyBoard_Form::button92_KeyUp(System::Object^ sender,System::Windows::Forms::MouseEventArgs^ e)
{
	if(Ctrl_KeyBoardForm.GetControl()->Btn_LongPressMode->Checked)
	{
		if(Ctrl_KeyBoardForm.GetControl()->button92->FlatStyle == System::Windows::Forms::FlatStyle::Flat)
		{
			Ctrl_KeyBoardForm.GetControl()->button92->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
			::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,92);
		}
		else
		{
			Ctrl_KeyBoardForm.GetControl()->button92->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	}
	else
	{
		Ctrl_KeyBoardForm.GetControl()->button92->FlatStyle = System::Windows::Forms::FlatStyle::Standard;
		::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_KEYUP,NULL,92);
	}
}

#pragma endregion

#pragma region Key Button 37 KEY_CODE_CTRL_KNOB_CW1

void KeyBoard_Form::button37_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_CLICK,NULL,37);
}

#pragma endregion

#pragma region Key Button 38 KEY_CODE_CTRL_KNOB_CW2

void KeyBoard_Form::button38_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_CLICK,NULL,38);
}

#pragma endregion

#pragma region Key Button 40 KEY_CODE_CTRL_KNOB_CW4

void KeyBoard_Form::button40_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_CLICK,NULL,40);
}

#pragma endregion

#pragma region Key Button 44 KEY_CODE_CTRL_KNOB_CW8

void KeyBoard_Form::button44_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_CLICK,NULL,44);
}

#pragma endregion

#pragma region Key Button 48 KEY_CODE_CTRL_KNOB_CCW1

void KeyBoard_Form::button48_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_CLICK,NULL,48);
}

#pragma endregion

#pragma region Key Button 49 KEY_CODE_CTRL_KNOB_CCW2

void KeyBoard_Form::button49_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_CLICK,NULL,49);
}

#pragma endregion

#pragma region Key Button 51 KEY_CODE_CTRL_KNOB_CCW4

void KeyBoard_Form::button51_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_CLICK,NULL,51);
}

#pragma endregion

#pragma region Key Button 55 KEY_CODE_CTRL_KNOB_CCW8

void KeyBoard_Form::button55_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_CLICK,NULL,55);
}

#pragma endregion

#pragma region Key Button 93 KEY_CODE_TUNE_KNOB_CW1

void KeyBoard_Form::button93_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_CLICK,NULL,93);
}

#pragma endregion

#pragma region Key Button 94 KEY_CODE_TUNE_KNOB_CW2

void KeyBoard_Form::button94_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_CLICK,NULL,94);
}

#pragma endregion

#pragma region Key Button 95 KEY_CODE_TUNE_KNOB_CW3

void KeyBoard_Form::button95_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_CLICK,NULL,95);
}

#pragma endregion

#pragma region Key Button 96 KEY_CODE_TUNE_KNOB_CW4

void KeyBoard_Form::button96_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_CLICK,NULL,96);
}

#pragma endregion

#pragma region Key Button 97 KEY_CODE_TUNE_KNOB_CW5

void KeyBoard_Form::button97_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_CLICK,NULL,97);
}

#pragma endregion

#pragma region Key Button 98 KEY_CODE_TUNE_KNOB_CW6

void KeyBoard_Form::button98_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_CLICK,NULL,98);
}

#pragma endregion

#pragma region Key Button 99 KEY_CODE_TUNE_KNOB_CW7

void KeyBoard_Form::button99_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_CLICK,NULL,99);
}

#pragma endregion

#pragma region Key Button 100 KEY_CODE_TUNE_KNOB_CW8

void KeyBoard_Form::button100_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_CLICK,NULL,100);
}

#pragma endregion

#pragma region Key Button 101 KEY_CODE_TUNE_KNOB_CW16

void KeyBoard_Form::button101_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_CLICK,NULL,101);
}

#pragma endregion

#pragma region Key Button 102 KEY_CODE_TUNE_KNOB_CW32

void KeyBoard_Form::button102_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_CLICK,NULL,102);
}

#pragma endregion

#pragma region Key Button 103 KEY_CODE_TUNE_KNOB_CW64

void KeyBoard_Form::button103_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_CLICK,NULL,103);
}

#pragma endregion

#pragma region Key Button 104 KEY_CODE_TUNE_KNOB_CCW1

void KeyBoard_Form::button104_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_CLICK,NULL,104);
}

#pragma endregion

#pragma region Key Button 105 KEY_CODE_TUNE_KNOB_CCW2

void KeyBoard_Form::button105_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_CLICK,NULL,105);
}

#pragma endregion

#pragma region Key Button 106 KEY_CODE_TUNE_KNOB_CCW3

void KeyBoard_Form::button106_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_CLICK,NULL,106);
}

#pragma endregion

#pragma region Key Button 107 KEY_CODE_TUNE_KNOB_CCW4

void KeyBoard_Form::button107_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_CLICK,NULL,107);
}

#pragma endregion

#pragma region Key Button 108 KEY_CODE_TUNE_KNOB_CCW5

void KeyBoard_Form::button108_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_CLICK,NULL,108);
}

#pragma endregion

#pragma region Key Button 109 KEY_CODE_TUNE_KNOB_CCW6

void KeyBoard_Form::button109_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_CLICK,NULL,109);
}

#pragma endregion

#pragma region Key Button 110 KEY_CODE_TUNE_KNOB_CCW7

void KeyBoard_Form::button110_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_CLICK,NULL,110);
}

#pragma endregion

#pragma region Key Button 111 KEY_CODE_TUNE_KNOB_CCW8

void KeyBoard_Form::button111_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_CLICK,NULL,111);
}

#pragma endregion

#pragma region Key Button 112 KEY_CODE_TUNE_KNOB_CCW16

void KeyBoard_Form::button112_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_CLICK,NULL,112);
}

#pragma endregion

#pragma region Key Button 113 KEY_CODE_TUNE_KNOB_CCW32

void KeyBoard_Form::button113_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_CLICK,NULL,113);
}

#pragma endregion

#pragma region Key Button 114 KEY_CODE_TUNE_KNOB_CCW64

void KeyBoard_Form::button114_Click(System::Object^ sender,System::EventArgs^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_FACEPLATE_CLICK,NULL,114);
}

void KeyBoard_Form::radioButton1_CheckedChanged(System::Object ^ sender, System :: EventArgs ^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_SWC_CHECK,NULL,1);
}

void KeyBoard_Form::radioButton2_CheckedChanged(System::Object ^ sender, System :: EventArgs ^ e)
{
	::SendMessage(AfxGetApp()->GetMainWnd()->GetSafeHwnd(),MESSAGE_SWC_CHECK,NULL,2);
}


#pragma endregion
