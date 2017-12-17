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

	};
}