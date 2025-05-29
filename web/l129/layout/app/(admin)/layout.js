import { Geist, Geist_Mono } from "next/font/google";

const geistSans = Geist({
  variable: "--font-geist-sans",
  subsets: ["latin"],
});

const geistMono = Geist_Mono({
  variable: "--font-geist-mono",
  subsets: ["latin"],
});

export const metadata = {
  title: "Facebook :connect together",
  description: "Connect with friends and the world around you on Facebook.",
};

export default function AdminLayout({ children }) {
  return (
    <>
       <div>Admin Navbar</div>
        {children}
    </>
        
  );
}
