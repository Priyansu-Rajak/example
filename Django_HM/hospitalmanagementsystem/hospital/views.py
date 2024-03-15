from django.shortcuts import render,redirect
from django.contrib.auth.models import User
from django.contrib.auth import authenticate,logout,login

# Create your views here.
def About(request):
    return render(request,'about.html')
def Patient_View(request):
    return render(request,'patient_info.html')
def Contact(request):
    return render(request,'contact.html')
def Index(request):
    return render(request,'index.html')
def Login(request):
   return render(request,'login.html')

def Logout_admin(request):
    if not request.user.is_staff:
        return redirect('Login')
    logout(request)
    return redirect('login')