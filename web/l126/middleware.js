// import { NextResponse } from 'next/server'
 
// // This function can be marked `async` if using `await` inside
// export function middleware(request) {
//   return NextResponse.redirect(new URL('/contact', request.url))
// }
 
// // See "Matching Paths" below to learn more
// export const config = {
//   matcher: '/about/:path*',
// }


import { NextResponse } from 'next/server'
 
export function middleware(request) {
  if (request.nextUrl.pathname.startsWith('/about')) {
    return NextResponse.rewrite(new URL('/contact', request.url))
  }
 
  if (request.nextUrl.pathname.startsWith('/dashboard')) {
    return NextResponse.redirect(new URL('/about', request.url))
  }
}