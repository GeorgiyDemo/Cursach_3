#pragma once

namespace Globals
{
	using namespace System;
	using namespace System::Text;
	using namespace System::Security::Cryptography;
	public ref class GlobalClass
	{
	public: 
		static String^ SQLGlobalPatch;
		static String^ MasterGlobalPassword;
		static String^ getMD5String(String^ inputString)
		{
			array<Byte>^ byteArray = Encoding::ASCII->GetBytes(inputString);
			MD5CryptoServiceProvider^ md5provider = gcnew MD5CryptoServiceProvider();
			array<Byte>^ byteArrayHash = md5provider->ComputeHash(byteArray);
			return BitConverter::ToString(byteArrayHash);
		}

		static String^ fromBase64(String^ from)
		{
			System::Text::UTF8Encoding^ encoding = gcnew System::Text::UTF8Encoding();
			array<unsigned char>^ base64 = System::Convert::FromBase64String(from);
			return encoding->GetString(base64);
		}

		static String^ toBase64(String^ from)
		{
			System::Text::UTF8Encoding^ encoding = gcnew System::Text::UTF8Encoding();
			System::String^ base64 = System::Convert::ToBase64String(encoding->GetBytes(from));
			return base64->Substring(0, base64->Length - 0);
		}


	};
}